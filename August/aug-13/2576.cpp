#include <iostream>
#define MAX 7

using namespace std;

int main(){

    int *number = new int[MAX];

    for(int i=0; i<MAX; i++){
        cin >> number[i];
    }

    int sum =0;
    int min =100;

    for(int i=0; i<MAX; i++){

        if((number[i]%2) == 1){

            if(min > number[i]){
                min = number[i];
            }
            sum += number[i];
        }
    }
    if(sum == 0){
        cout<<-1<<endl;
    }else{
        cout<<sum<<endl;
        cout<<min<<endl;
    }
    

    return 0;
}