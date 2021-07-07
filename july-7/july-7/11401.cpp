//
//  11401.cpp
//  july-7
//
//  이항계수 3
//  Created by 배경민 on 2021/07/07.
//

#include <iostream>
#define P 1000000007LL

typedef long long ll;
using namespace std;

ll N,K,fac[4000001],inv[4000001];//inv[x]의 정의는 x!의 inverse

void Input(){
    cin>>N>>K;
}

ll power(ll x, ll y) {    //분할 정복을 이용하여 x^y 구하기
    ll retn = 1;
    while (y > 0) {
        if (y % 2) {
            retn *= x;
            retn %= P;
        }
        x *= x;
        x %= P;
        y /= 2;
    }
    return retn;
}


int main() {
    
    fac[1] = 1;
    
    //factorial 전처리
    for (int i = 2; i <= 4000000; i++) fac[i] = (fac[i - 1] * i) % P;
    
    //페르마의 소정리 이용
    inv[4000000] = power(fac[4000000], P - 2);
    
    //inverse(fac(i))=inverse(fac(i+1))*(i+1)이라는 수식을 이용하여 전처리
    for (int i = 4000000 - 1; i > 0; i--) inv[i] = (inv[i + 1] * (i + 1)) % P;
    
    //Input
    Input();
    
    if (N == K || !K) {
            puts("1");
            return 0;
        }
    
    ll Remainder = (fac[N] * inv[N - K]) % P;
    ll sol = (Remainder*inv[K]) % P;
      
    cout << sol<<endl;
    
    return 0;
}
