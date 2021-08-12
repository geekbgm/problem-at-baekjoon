#include <iostream>

using namespace std;

int main(){

    int N,K;
    int count=0;

    cin>>N>>K;
    int *result = new int[N];

    for(int i =1; i<=N;i++){
        if(N%i==0){
            result[count] = i;
            count +=1;
        }
    }

    cout<<result[K-1]<<endl;

    return 0;
}