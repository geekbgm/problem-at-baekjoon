#include <iostream>
#define MAX_TEST 10000

using namespace std;

int T;
int A[MAX_TEST];
int B[MAX_TEST];


int main(){

    cin >> T;

    for(int i =1 ; i<=T ; i++){
        cin >>A[i]>>B[i];
    }

    for(int i=1 ; i<=T; i++){
        cout<<"Case #"<<i<<": "<<A[i]<<" + "<<B[i]<<" = "<<A[i]+B[i]<<endl;
    }
    

    return 0;
}