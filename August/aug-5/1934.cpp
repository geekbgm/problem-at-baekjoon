#include <iostream>

using namespace std;

//Euclidean algorithm
int Ecl(int a, int b){
    if(a%b == 0){
        return b;
    }else{
        return Ecl(b,a%b);
    }

}

int main(){

    int A,B,T;
    cin >>T;
    
    int *result = new int[T];

    for(int i =0 ; i<T;i++){
        cin>>A>>B;

        if(A>B){
            result[i]=A*B/Ecl(A,B);
        }else{
            result[i]=A*B/Ecl(B,A);
        }   

    }

    for(int i = 0; i<T;i++){
        cout<<result[i]<<endl;
    }

    return 0;
}