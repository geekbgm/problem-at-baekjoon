#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){

    int N, i;
    ll ans;
     
    cin>>N;

    ll *arr = new ll[N];

    for(int i=0; i<N;i++){
        cin>> arr[i];
    }

    sort(arr, arr+N);

    cout<<arr[0]*arr[N-1]<<endl;

    return 0;
}