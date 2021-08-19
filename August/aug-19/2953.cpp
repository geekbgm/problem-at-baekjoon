#include <iostream>

using namespace std;

int main(){

    int max = 0;
    int a;
    int index;
    for(int i = 0 ; i<5;i++){
        int sum =0;
        for(int j=0 ; j<4; j++){
            cin >> a;
            sum +=a;
        }
        if(sum > max){
            max = sum;
            index = i+1;
        } 
    }
    
    cout<<index<<" "<<max<<endl;

    return 0;
}