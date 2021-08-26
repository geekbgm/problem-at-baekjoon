#include <iostream>

using namespace std;

int arr[1001];

void calc() {
	int cnt = 1;

	for (int i = 0; i < 1001;) {

		for (int j = 0; j < cnt; j++) {
			arr[i++] = cnt;
		}
		cnt++;
	}
}
int main(){

    int a,b;
    int result=0;

    cin >> a>> b;
    calc();

    for(int i=a-1; i<b; i++){
        result += arr[i];
    }

    cout<<result<<endl;

    return 0;
}