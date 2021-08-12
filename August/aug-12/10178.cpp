#include <iostream>

using namespace std;

int main(){

    int T;  
    int a,b;

    cin >> T;

    int *quotient = new int[T];
    int *remainder = new int[T];

    int temp1;
    int temp2;

    for(int i=0; i<T;i++){
        cin >> a >>b;
        quotient[i] = a /b;
        remainder[i] = a%b;
    }

    for(int i = 0 ; i<T; i++){

        cout<<"You get "<<quotient[i]<<" piece(s) and your dad gets "<<remainder[i]<<" piece(s).\n";
    }

    return 0;
}