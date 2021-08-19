#include <iostream>

using namespace std;

int main(){
    int input;
    int output;
    int max= 0;
    int num= 0;
    for(int i =0 ; i<10;i++){
        int residual;
        cin>> input >> output;
        residual = output-input;
        num += residual;
        if(num>max) max = num;
    }

    cout<<max<<endl;
    
    return 0;
}