#include <iostream>
#define MAX 9

using namespace std;

int main(){

    int *number = new int[MAX];

    for(int i=0; i<MAX; i++){
        cin>>number[i];
    }

    int max = number[0];
    int idx = 0;

    for(int i=0; i<MAX; i++){
        if(max < number[i]){
            max = number[i];
            idx = i;
        }
    }

    cout<<max<<endl;
    cout<<idx+1<<endl;

    return 0;
}