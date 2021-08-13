#include <iostream>

using namespace std;

int main(){

    int T;
    int N;
    int a;

    cin >> T;
    int *result = new int[T];

    for(int i=0; i<T; i++){
        cin >> N;
        for(int j =0; j<N; j++){

            cin >> a;

            result[i] += a;

        }
    }

    for(int i=0; i<T; i++){

        cout<<result[i]<<endl;

    }

    return 0;
}