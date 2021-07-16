//
//  2749.cpp
//  july-13
//
//  Created by 배경민 on 2021/07/13.
//
// 1,000,000으로 나눈 나머지들의 피사노주기를 구하면
// 1,500,000의 주기라는 것을 알 수 있고 1,500,000값들을 배열에 저장하여 문제를 푼다.

#include <iostream>

typedef long long ll;

ll a[1500050];
int INF = 1000000;

using namespace std;

void fabonacci(){
    a[0] = 0;
    a[1] = 1;
    
    for(int i=0; i<1500000;i++){
        a[i + 2] = (a[i + 1] + a[i]) % INF;
    }
}

int main(int argc, const char * argv[]) {
    ll n;
    cin >> n;
    fabonacci();
    cout << a[n%1500000]<<endl;
    return 0;
}
