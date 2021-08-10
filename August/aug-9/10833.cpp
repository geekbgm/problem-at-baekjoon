#include <iostream>

using namespace std;

int main(){

    int N;
    int a,b;
    int result = 0;
    cin >> N;

    for(int i=0; i<N;i++){

        cin>> a >>b;
        result += b%a;
    }

    cout<<result<<endl;
    
    return 0;
}