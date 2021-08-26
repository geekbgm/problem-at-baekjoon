#include <iostream>

using namespace std;

int main(){

    int *input = new int[5];
    int temp;

    for(int i=0; i<5;i++){
        cin >>input[i];
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(input[j] > input[j+1]){
                temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }

    cout<<(input[3]>input[4]? input[0]+input[4]-50: input[0]+input[3]-50)<<endl;
    return 0;
}