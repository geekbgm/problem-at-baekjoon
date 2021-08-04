#include <iostream>
#include <string>
using namespace std;

int main(){

    long long A,B;
    char opr;
    cin >> A>>opr>>B;

    if(opr == '*'){
        cout<<A*B<<endl;
    }else{
        cout<<A+B<<endl;
    }


    return 0;
}