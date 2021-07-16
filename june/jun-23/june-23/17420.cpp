//
//  main.cpp
//  problem17420
//
//  Created by 배경민 on 2021/06/23.
//

#include "stdc++.h" // 제출시 #include <bits/stdc++.h>으로 변경해야함.
#define x first
#define y second

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;

vector<p> v; // 2 by n matrix

ll cnt; // 기프티콘 연장 횟수

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n; v.resize(n); // 기프티콘의 개수를 입력받는다.
    
    for(auto &i : v) cin >> i.x; // 기프티콘 남은 기한
    for(auto &i : v) cin >> i.y; // 기프티콘 사용 계획일자로 부터 남은 기한
    
    
    // 계획일보다 기프티콘의 남은 기한이 많다면 무조건 먼저 연장한다.
    cnt = 0;
    for(auto &i : v){
        
        if(i.x < i.y){
            ll t = (i.y - i.x + 30 - 1) / 30;
            i.x += t * 30;
            cnt += t;
        }
    }
    
    //람다식을 이용하여 오름차순 sorting
    sort(v.begin(), v.end(), [&](p &a, p &b){
            if(a.y != b.y) return a.y < b.y;
            return a.x < b.x;
        });
    
    ll now = 0; //
    
    for(int i=0; i<n; i++){
            int nxt = i + 1;
            while(nxt < v.size() && v[nxt-1].y == v[nxt].y) nxt++;

            for(int j=i; j<nxt; j++){
                if(v[j].x < now){
                    int b = ((int)now - (int)v[j].x + 30 - 1) / 30; //long long에서 int로 타입변경
                    cnt += b;
                    v[j].x += 30 * b;
                }
            }
        
            // i에서 nxt까지 오름차순 sorting
            sort(v.begin()+i, v.begin()+nxt, [&](p &a, p &b){
                if(a.y != b.y) return a.y < b.y;
                return a.x < b.x;
            });

            now = max(now, v[nxt-1].x);
            i = nxt - 1;
        }

        cout << cnt<<endl;

}
