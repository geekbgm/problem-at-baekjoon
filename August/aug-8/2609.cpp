#include <iostream>

using namespace std;

// using Euclidean algorithm
int Euclidean( int a , int b){

    while(b != 0){

        int r = a % b;
        a =b;
        b =r;
    }
    return a;
}

int lcm(int a, int b, int greatCommonDivisor)
{
    return (a * b) / greatCommonDivisor;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B;

    cin>>A>>B;

    int greatCommonDivisor = Euclidean(A,B);
    int leastCommonMultiple = lcm(A,B, greatCommonDivisor);

    cout<<greatCommonDivisor<<"\n";
    cout<<leastCommonMultiple<<"\n";

    return 0;
}