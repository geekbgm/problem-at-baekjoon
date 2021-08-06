#include <iostream>

using namespace std;

int main(){

    int T;
    int a,b,c;
    cin >>T;

    if(T%10 != 0) cout<<"-1"<<endl;
    else{
        a = T/300;
        b = (T%300)/60;
        c = ((T%300)%60)/10;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}