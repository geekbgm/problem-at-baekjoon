#include <iostream>

using namespace std;

int main(){

    int N;
    int target;
    
    cin >> N>>target;

    int *numbers = new int[N];

    for(int i=0; i<N;i++){
        cin >> numbers[i];
    }

    for(int i=0;i<N;i++){
        if(numbers[i]<target){
            cout<<numbers[i]<<" ";
        }
    }

    return 0;
}