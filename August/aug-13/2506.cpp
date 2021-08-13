#include <iostream>

using namespace std;

int main(){

	int size;
    int n;
    int score = 0;
    int sum = 0 ;

	cin >> size;
	
	for (int i = 0; i < size; i++){

		cin >> n;

		if (n == 1){
			score++;
			sum += score;
		}else score = 0;

	}

	cout << sum<<'\n';

    return 0;
}
