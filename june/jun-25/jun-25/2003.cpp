//
//  2003.cpp
//  name of problem is "수들의 합2" in korean
//
//  Created by 배경민 on 2021/06/25.
//

#include <iostream>

using namespace std;

int main() {
    int  N, M;
    int l = 0 ;
    int h = 0 ;
    int ans = 0;
    int sum = 0;
    
    int arr[10000];
    
    cin >> N >>M;
    for (int i = 0; i < N; i++) {
            cin>> arr[i];
        }
    
    while(1) {
            if (sum >= M) sum -= arr[l++]; // M인 경우 가장 아래 범위의 수를 빼기
            else if(h == N) break;
            else sum += arr[h++]; // 합이 M이 될때까지 합하기
        
            if (sum == M) ans++;
            
        }
    
    cout << ans<<endl;
    
    return 0;
}
