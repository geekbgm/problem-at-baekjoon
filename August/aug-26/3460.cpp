#include <iostream>

using namespace std;

int main(){

    int T;
    int n;

    cin >> T;
    
    for(int i = 0 ;i<T;i++){

        cin>>n;
        int digit = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                cout << digit << " ";
                }
            n /= 2;
            digit++;
            }
    }

    return 0;
}