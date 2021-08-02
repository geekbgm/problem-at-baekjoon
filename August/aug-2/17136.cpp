#include <iostream>
#include <algorithm>
#define MAX 10
#define INF 987000000

using namespace std;

int arr[MAX][MAX] ;
int cnt;
int answer;
int paper[6] = {0,5,5,5,5,5};


void func(int y, int x){

    if(x == MAX){
        func(y+1,0);
        return;
    }

    if(y == MAX){
        answer = min(answer, cnt);
        return;
    }

    if(arr[y][x] == 0){ 
        func(y, x+1);
        return;
    }


    for( int i =5; i >= 1; i--){
        
        if(paper[i] == 0 || y+i > MAX|| x+i > MAX){
            continue;
        }

        bool flag =true;

        for( int j =0; j<i; j++){

            for(int k=0; k<i ; k++){

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
        cnt++;

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

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<MAX ; i++){
        for(int j =0; j<MAX;j++){
            cin >> arr[i][j];
        }
    }

    answer = INF;
    func(0,0);

    if(answer == INF){
        cout<< -1 <<endl;
    }else{
        cout<< answer <<endl;
    }

    return 0;
}