#include <iostream>

using namespace std;

int n, m, i, s = 0;

int main() {

	cin >> n;

	for (i = 0; i < 5; i++) {
		cin >> m;
		if (n == m)	s++;
	}
    
	cout << s << endl;

    return 0;
}