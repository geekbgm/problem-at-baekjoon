#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    int count = 0;
    int result = 0;
    int *input = new int[n];

    for(int i=0;i<n ;i++){
        cin >> input[i];

        for (int j = 1; j <= input[i]; j++)
		{
			if (input[i] % j == 0)
			{
				count++;
			}
		}

		if (count == 2)
			result++;

		count = 0;
	}

	cout << result<<endl;

    return 0;

}