#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 16

using namespace std;

typedef struct
{
    int x,y;
} Dir;

Dir moving[3] = { {0,1}, {1,0}, {1,1} };

int N;
int result = 0;
int arr[MAX][MAX];

void func(int x, int y, int obj){

    if(x>= 0&& y>=0 && x<N && y<N ){

        if(obj == 2){
            if(arr[x][y] ==1 || arr[x-1][y]==1 || arr[x][y-1]==1){
                return;
            }
        }else if(obj==1|| obj ==0){
            if(arr[x][y]==1){
                return;
            }
        }


        if(y==N-1 && x==N-1){
            result ++;
            return;
        }

        if(obj == 0){
            func(x,y+1,0);
            func(x+1,y+1,2);
        }else if(obj == 1){
            func(x+1,y,1);
            func(x+1,y+1,2);
        }else{
            func(x,y+1,0);
            func(x+1,y,1);
            func(x+1,y+1,2);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    cin >> N;

    for(int i = 0; i<N; i++){
        for(int j=0; j<N; j++) cin >> arr[i][j];
    }
    
    func(0,1,0);

    cout<<result<<endl;

    return 0;
}