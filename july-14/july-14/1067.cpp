//
//  main.cpp
//  july-14
//
//  Created by 배경민 on 2021/07/14.
//

#include <iostream>
#include <complex>
#include <vector>

using namespace std;

typedef complex<double> cp;
typedef vector<cp> vec;

const double pi = acos(-1);

void FFT(vec &f, cp w){
    int n = f.size();
    if(n == 1) return; //base case
    vec even(n >> 1), odd(n >> 1);
    for(int i=0; i<n; i++){
        if(i & 1) odd[i >> 1] = f[i];
        else even[i >> 1] = f[i];
    }
    FFT(even, w*w); FFT(odd, w*w);
    cp wp(1, 0);
    for(int i=0; i<n/2; i++){
        f[i] = even[i] + wp * odd[i];
        f[i+n/2] = even[i] - wp * odd[i];
        wp *= w;
    }
}

vec mul(vec a, vec b){
    int n = 1;
    
    while(n <= a.size() || n <= b.size()) n <<= 1;
    
    n <<= 1;
    
    a.resize(n); b.resize(n); vec c(n);
    
    cp w(cos(2*pi/n), sin(2*pi/n));
    
    FFT(a, w); FFT(b, w);
    for(int i=0; i<n; i++) c[i] = a[i] * b[i];
    
    FFT(c, cp(1, 0) / w);
    for(int i=0; i<n; i++){
        c[i] /= cp(n, 0);
        c[i] = cp(round(c[i].real()), round(c[i].imag())); //result is integer
    }
    
    return c;
}


int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
        
    vector<int> A(n+n), B(n);
    for(int i=0; i<n; i++) cin >> A[i];
    for(int i=n-1; i>=0; i--) cin >> B[i];
    for(int i=0; i<n; i++) A[i+n] = A[i];

    vec a, b;
    for(auto i : A) a.push_back(cp(i, 0));
    for(auto i : B) b.push_back(cp(i, 0));

    vec c = mul(a, b);

    long long ans = 0;
    for(int i=0; i<c.size(); i++){
        ans = max<long long>(ans, round(c[i].real()));
    }
    
    cout << ans <<endl;
}
