#include <iostream>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pii;
#define ff first
#define ss second
 
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
 
ll arr[1010101];
ll brr[1010101];
ll dp[1010101];
 
int main(){
    ll i,j,k,m,n;
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> arr[i];
    for(i=1;i<=n;i++)
        cin >> brr[i];
        
    lin l;
    l.a = brr[1];
    l.b = 0;
    insert(l);

    for(i=2;i<=n;i++){
        dp[i]=sol(arr[i]);
        l.a = brr[i];
        l.b = dp[i];
        insert(l);
    }
    cout << dp[n]<<endl;
    
    return 0;
}