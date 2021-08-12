#include <iostream>

using namespace std;

int main(){
    
    int a,b;
    int T;

    cin>> T;
    int *result = new int[T];

    for(int i=0;i<T;i++){
        cin >>a >>b;
        result[i] = 2 -a+b;

    }

    for(int i=0;i<T;i++){

        cout<<result[i]<<endl;

    }

    return 0;
}