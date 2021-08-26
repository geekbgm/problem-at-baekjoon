#include <iostream>

using namespace std;

int main(){

    int N;
    int target;
    int cnt;
    
    cin >>N;
    int *input = new int[N];
    
    for(int i=0; i<N; i++){
        cin>>input[i];
    }
    
    cin>>target;

    for(int i=0; i<N;i++){
        if(input[i]==target){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}