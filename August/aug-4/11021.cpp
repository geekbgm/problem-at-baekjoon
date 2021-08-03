#include <iostream>
#define MAX_TEST 10000
using namespace std;

int T;
int A[MAX_TEST],B[MAX_TEST];

int main(){
    
    cin >> T;

    for(int i =1; i <=T; i++){
        cin >>A[i]>>B[i];
        if(A[i]>10&&A[i]<0&&B[i]>10&&B[i]<0){
            cout<<"Error occur"<<endl;
        }
    }

    for(int i =1; i<=T; i++){
        cout<<"Case #"<<i<<": "<<A[i]+B[i]<<endl;
    }
 

    return 0;
}