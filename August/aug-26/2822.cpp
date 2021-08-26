#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int sum=0;
    int input;
    
    vector<pair<int,int>> v(8);
    vector<int> ress(5);

    for(int i=0; i<8;i++){
        cin>>v[i].first;
        v[i].second = i + 1; 
    }
    sort(v.begin(), v.end());

    for(int i = 7; i>=3; i--){
        sum += v[i].first;
    }
    
    cout<<sum<<endl;

    int j=0;
    for(int i=7; i>=3; i--){
        ress[j] = v[i].second;
        j++;
    }
    sort(ress.begin(), ress.end());
    for(int i=0; i<5; i++){
        cout<<ress[i]<<" ";
    }

    return 0;
}