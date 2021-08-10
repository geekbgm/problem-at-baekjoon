#include <iostream>

using namespace std;

int main(){

    int *cost_of_book = new int[10];

    for(int i =0; i<10 ;i++){
        cin>>cost_of_book[i];
    }

    int result = cost_of_book[0];
    

    for(int i=1;i<10;i++){
        result -= cost_of_book[i];
    }

    cout<<result<<endl;

    return 0;
}