#include <iostream>

using namespace std;

int main(){

    int T;
    int a,b;

    cin >> T;
    
    int *result =  new int[T];

    for(int i=0; i<T; i++){
        cin >> a >>b;

        result[i] = a+b;
    }

    for(int i=1; i<=T;i++){

        cout<<"Case "<<i<<": "<<result[i-1]<<"\n";
    }

    return 0;
}