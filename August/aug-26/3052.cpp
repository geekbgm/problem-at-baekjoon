#include <iostream>

using namespace std;

int main(){

    int *input = new int[10];
    int result = 0;

    for(int i=0; i<10;i++){
        cin>> input[i];
        input[i] %= 42;  
    }

    for(int i=0; i<10; i++){
        int cnt = 0;
        for(int j=0;j<i;j++){
            if(input[i]==input[j]) cnt++;
        }   
        if(cnt == 0) result ++; 
    }

    cout<<result<<endl;
    
    return 0;
}