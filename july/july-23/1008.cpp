#include <iostream>

using namespace std;

int main(void) {

    double a, b;
    float c;

    cin >> a >> b;

    cout.precision(12);
    cout<<fixed;
    cout << a/b <<endl;

    return 0;
}