//
//  main.cpp
//  july-1
//
//  Created by 배경민 on 2021/07/01.
//

#include "stdc++.h"
using namespace std;
typedef long long int ll;
 
struct lin{
    ll a,b;
};
 
ll sz=0;
lin stk[1010101];
double cx(ll a,ll b) {
    return 1.0 * (double)(stk[a].b - stk[b].b) / (stk[b].a - stk[a].a);
}
void insert(lin v){
    stk[sz] = v;
    while(1<sz&&cx(sz-2,sz-1)>cx(sz-1,sz)){
        stk[sz-1] = stk[sz];
        sz--;
    }
    sz++;
}
ll sol(ll x){
    ll lo=0,hi=sz-1;
    while(lo<hi){
        ll mid=(lo+hi)/2;
        if (cx(mid,mid+1)<=x) lo=mid+1;
        else hi=mid;
    }
    return stk[lo].a*x+stk[lo].b;
}
void clear(){
    sz=0;
}
 
ll x[1010101];
ll pre[1010101];
ll dp[1010101];
 
int main(){
    ll a,b,c,n,i,j,k;
    cin >> n ;
    cin >> a >> b>> c;
    for(i=1;i<=n;i++){
        cin >> x[i];
        pre[i] = pre[i-1]+x[i]; //prefix sum
    }
    lin l;
    l.a = b;
    l.b = 0;
    insert(l);
    for(i=1;i<=n;i++){
        dp[i] = c+a*pre[i]*pre[i]+sol(pre[i]);
        l.a = -2*a*pre[i]+b;
        l.b = dp[i]-b*pre[i]+a*pre[i]*pre[i];
        insert(l);
    }
    printf("%lld",dp[n]);
    return 0;
}

