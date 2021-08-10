#include <iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    for(int i=0; i<N; i++){

        for(int k = 0 ; k<i; k++){
                cout<< " ";
        }
        

        for(int j=1; j < 2*(N-i); j++){
            cout<<"*";
        }

        cout<<"\n";

    }

    for(int i =N-1; i>0 ;i--){
        
        for(int j = 1; j<i;j++){
            cout<<" ";
        }

        for(int k = 2*(N-i)+1; k>0 ;k--){
            cout<<"*";
        }
        
        cout<<"\n";

    }


    return 0;
}