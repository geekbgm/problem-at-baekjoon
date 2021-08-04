#include <iostream>
#include <string>

using namespace std;

int main(){
    int A,B;
    
    while(1){
        cin >> A >>B;
        if(A == 0 && B==0){
            break;
        }else if(A>B){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}

//what if array get to store result everything?
// if you have a time, please resolve that.