#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int *input = new int[5];
    int sum =0;

    for(int i =0 ; i<5;i++){
        cin>> input[i];
        sum += input[i];
    }
    
    int min = sum/5;

    sort(input, input+5);   

    cout<<min <<endl << input[2]<<endl;

    return 0;
}