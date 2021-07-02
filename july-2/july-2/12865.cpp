//
//  12865.cpp
//  july-2
//  평범한 배낭
//  Created by 배경민 on 2021/07/02.
//

#include "stdc++.h"

using namespace std;
int N,K,item[102][2],dp[102][100'003]; // dp[아이템의 갯수][무게(인덱스로 표현)]

int main() {
    // insert code here...
    cin >> N >> K;
    for(int i=1;i<=N;i++)
    {
            cin >> item[i][0] >> item[i][1];
        }
    
    for(int i=1;i<=N;i++)
      {
          int weight = item[i][0], val=item[i][1];
          
          for(int j=0;j<=K;j++)
          {
              if(j<item[i][0]) dp[i][j]=dp[i-1][j];
              else dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight]+val);
          }
      }
    
    cout << dp[N][K]<<endl;
    return 0;
}
