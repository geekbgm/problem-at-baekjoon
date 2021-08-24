#include <iostream>

using namespace std;

typedef unsigned long long ll;

ll power(ll x, ll y, ll mod){ // 빠른 거듭제곱
    ll res =1;
    x %= mod;
    while(y){
        if(y % 2) res = (res * x)% mod;
        y /= 2;
        x = (x*x)% mod;
    }

    return res;

}


bool miller(ll n, ll a){ // 밀러-라빈 소수 판별법
    if(a % n ==0) return false;
    ll k = n-1;
    while(1){
        ll temp = power(a,k,n);
        if(temp == n-1) return true;
        if(k%2) return (temp == 1 || temp == n-1);
        k /= 2;
    }
}

bool Answering_about_Prime(ll n){ // 작은 소수를 이용해서 판별
    ll primelist[5] = {2, 3, 5, 7, 11};

    if(n<=1) return false;

    if(n==2 || n ==3 ) return true;

    if(n%2 == 0) return false;

    for(int i=0; i <5; i++){
        ll a = primelist[i];
        if(n == a) return true;
        if(!miller(n,a)) return false;
    }
    return true;

}

int main(){

    int N;
    int cnt=0;

    cin >>N;

    for(int i=0;i<N;i++){
        ll s;
        cin >> s;
        if(Answering_about_Prime(2*s+1)) cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}