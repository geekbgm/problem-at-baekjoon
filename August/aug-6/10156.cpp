#include <iostream>

using namespace std;

int main(){

    int K, N, M;
    int result;

    cin >> K >> N >> M;

    result = K*N - M;

    if (result <0) result = 0;
    
    cout << result<<endl;

    return 0;
}