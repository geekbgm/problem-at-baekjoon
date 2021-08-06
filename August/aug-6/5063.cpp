#include <iostream>
#define MAX 10000

using namespace std;

int main(){
    int T;
    int r,e,c;
    int temp;
    string result[MAX];

    cin>>T;

    for(int i =0 ; i<T;i++){
        cin >> r >> e >> c;
        temp = e-r;
        if(temp > c){
            result[i] = "advertise";
        }else if(temp == c){
            result[i] = "does not matter";
        }else{
            result[i] = "do not advertise";
        }
    }

    for(int i = 0; i<T; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}