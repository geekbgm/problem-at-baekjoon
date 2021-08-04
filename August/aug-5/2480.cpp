#include <iostream>

using namespace std;

int main(){

    int A,B,C;
    int result;
    
    cin >>A>>B>>C;

    if(A == B){
        if(B == C){
            result = 10000+A*1000;
        }else{
            result = 1000 + B*100;
        }

    }else if(A==C){
        if(B == C){
           result = 10000+A*1000;
        }else{
           result = 1000 + A*100;
        }
    }else{
        if(B==C){
            result = 1000 + B*100;
        }else{
            result = max(max(A,B),C)*100;
        }

    }

    cout<< result<<endl;

    return 0;
}