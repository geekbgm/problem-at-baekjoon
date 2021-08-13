#include <iostream>

using namespace std;

int memo[100];

int fib(int n)
{
	
	if (n <= 1)
		return n;

	if (memo[n] > 0)
		return memo[n];

	memo[n] = fib(n - 1) + fib(n - 2);
		return memo[n];
	
}

int main()
{
	
	int n;
	cin >> n;


	cout << fib(n);

}
