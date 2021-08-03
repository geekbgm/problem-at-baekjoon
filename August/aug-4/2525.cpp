#include <iostream>

using namespace std;

int main(){
    int A,B,C;
    int result_A, result_B;

    cin >> A >> B ;
    cin >> C;

    result_A = A;
    result_B = B+C;
    

    if(result_B>=60){
        result_A += result_B/60;
        result_B %= 60;
    }

    result_A %= 24;

    cout << result_A <<" "<<result_B<<endl;

    return 0;
}