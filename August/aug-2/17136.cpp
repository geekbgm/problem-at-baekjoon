#include <iostream>
#include <algorithm>
#define MAX 10
#define INF = 999999999

using namespace std;

int arr[MAX][MAX] ;
int cnt;
int answer;
int paper[6] = {0,5,5,5,5,5};


void func(int y, int x){

    if(x==MAX){
        func(y+1,0);
        return;
    }


    for( int i 5; i>=1; i--){
        
        if(paper[i] == 0 || y+i > MAX|| x+i > MAX){
            continue;
        }

        bool flag =true;

        for( int j =0; j<i; i++){

            for(int k=0; k<i ;k ++){

                if(arr[y+j][x+k]==0){
                    flag = false;
                    break;
                }

            }

            if(flag == false){
                break;
            }
        }


        if(flag == false){
            continue;
        }

        for(int j=0;j<i;j++){
            for(int k =0; k<i ;k++){
                
                arr[y+j][x+k] = 0;

            }
        }

        paper[i]--;
        cnt++

        func(y, x+i);

        for(int j=0; j<i ;j++){

            for(int k =0; k<i ;k++){
                arr[y+j][x+k] = 1;
            }
        }

        paper[i]++;
        cnt--;


    }

  
    
}

int main(){

    for(int i=0; i<MAX ; i++){
        for(int j =0; j<MAX;j++){
            cin >> arr[i][j];
        }
    }

    result = INF;
    func(0,0);

    if(result == INF){
        cout<< -1 <<endl;
    }else{
        cout<< result <<endl;
    }

    return 0;
}