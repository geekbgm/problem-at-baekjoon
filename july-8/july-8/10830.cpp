//
//  10830.cpp
//  july-8
//  행렬 제곱
//  Created by 배경민 on 2021/07/08.
//

#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<vector<ll>> matrix;
ll N, B; // matrix 차원과 거듭제곱의 수

// multiple operator matrix로 오버라이딩
matrix operator * (const matrix &a, const matrix &b) {
    ll size = a.size();
    matrix res(size, vector<ll>(size));
    for (ll i = 0; i < size; i++) {
        for (ll j = 0; j < size; j++) {
            for (ll k = 0; k < size; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            res[i][j] %= 1000;
        }
    }
    return res;
}

//빠른 거듭제곱 알고리즘을 사용
matrix power(matrix A, ll B) {
    ll size = A.size();
    matrix res(size, vector<ll>(size));
    
    for (ll i = 0; i < size; i++) { // 단위 행렬
        res[i][i] = 1;
    }
    
    while (B > 0) {
        if (B % 2 == 1) {
            res = res * A;
        }
        B /= 2;
        A = A * A;
    }
    return res;
}

//matrix 출력
void PrintMatrix(const matrix& A) {
    ll size = A.size();
    for (ll i = 0; i < size; i++) {
        for (ll j = 0; j < size; j++) {
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    // insert code here...
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N>> B;
    
    matrix A(N, vector<ll>(N));
    
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    PrintMatrix(power(A,B));
    
    return 0;
}
