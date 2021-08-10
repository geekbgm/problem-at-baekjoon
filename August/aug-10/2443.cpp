#include <iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    for(int i = N; i>0; i--){

        for(int j = N-(i);j>0;j--){
            cout<<" ";
        }

        for(int k = 1; k<(2*i); k++){
            cout<< "*";
        }   

        cout<<"\n";

    }

    return 0;
}