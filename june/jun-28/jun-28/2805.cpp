//
//  2805.cpp
//  jun-28
//  name of problem is "나무 자르기" in korean
//
//  Created by 배경민 on 2021/06/28.
//

#include <iostream>

int trees[1000001];

using namespace std;

int main() {
    long long N, M;
    long long max = 0;
    long long min = 0;
    long long result = 0;
    
    cin>>N>>M; // 첫번째 입력값
    
    for (int i = 0; i < N; i++){ //max 값 정의
            cin >> trees[i];
        if (max < trees[i]) max = trees[i];
        }
    
    while (min <= max){
            long long mid = (min + max) / 2;
            long long total = 0;
        
            for (int i = 0; i < N; i++) if (mid < trees[i])total += trees[i]-mid;
     
            if (total >= M){
                if (result<mid) result = mid;
                min = mid + 1;
            }
            else{
                max = mid - 1;
            }
     
        }
    
    cout<<result<<endl;
    
    return 0;
}
