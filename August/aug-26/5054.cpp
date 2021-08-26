#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int T;
    int N;
    int arr[20];

    cin>>T;
    
    int *result = new int[T];

    for(int i=0; i<T; i++){
        cin >> N;
        for(int i=0; i<N;i++){
            cin >>arr[i];
        }
        sort(arr, arr+N);
        
        int ans =0, cur = arr[0], s=arr[0];
        for(int i=0; i<N; i++){
            ans += abs(arr[i]-cur);
            cur = arr[i];
        }
        ans += abs(s-cur);
        result[i] =ans;       
    }

    for(int i=0 ; i<T;i++){
        cout<<result[i]<<endl;
    }

    return 0;
}