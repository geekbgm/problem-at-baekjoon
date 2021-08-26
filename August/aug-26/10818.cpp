#include <iostream>

using namespace std;

int main(){

    int N;
    int max=-1000001;
    int min=1000001;

    cin>> N;
    int *input = new int[N];

    for(int i=0; i<N; i++){
        cin>> input[i];
        if(input[i]>max) max = input[i];
        if(input[i]<min) min = input[i];
    }

    cout<<min<<" "<<max<<endl;
    
    return 0;
} 