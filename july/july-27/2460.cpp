#include <iostream>
using namespace std;

int a, b ; 
int total = 0, big = 0;

int main() {
    
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        total += -a + b;

        if (total > big)
            big = total;
            
    }

    cout << big;

}