#include <iostream>
#define MIN -1000
#define MAX 1000

using namespace std;

int main(){
    int R1, S;

    cin >> R1 >> S;

    if(R1>=MIN&&R1<=MAX&&S>=MIN &&S<=MAX){
        cout << 2*S-R1 <<endl;
    }else{
        cout<<"Error occur"<<endl;
    }
    

    return 0;
}