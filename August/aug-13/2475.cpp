#include <iostream>
using namespace std;
int x, i, s = 0;
int main() {
	for (i = 0; i < 5; i++) {
		cin >> x;
		s += x * x;
	}
	cout << s % 10 << endl;
}