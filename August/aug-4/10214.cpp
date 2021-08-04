#include <iostream>

using namespace std;

int arr[2][9];
int T;
int sum1=0;
int sum2=0;

int main(){

    
    cin >>T;
    
    for(int i =0; i<T;i++){

        for(int k = 0; k<9; k++){
            cin >> arr[0][k]>>arr[1][k];
        }

        for(int k = 0; k<9;k++){
            sum1 += arr[0][k];
        }

        for(int k = 0; k<9;k++){
            sum2 += arr[1][k];
        }

        if(sum1>sum2){
            cout<<"Yonsei"<<endl;
        }else if(sum1<sum2){
            cout<<"Korea"<<endl;
        }else if(sum1 == sum2){
            cout<<"Draw"<<endl;
        }
        
        sum1 =0;
        sum2 =0;

    }
}