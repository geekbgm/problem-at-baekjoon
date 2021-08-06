#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;

    while (1)
    {
       cin >> n;

       if (n == -1){
           break;
       }
    
        cout<< n;

        vector<int> v;
        int sum = 0;

        for(int i = 1; i<=n/2; i++){

            if(n%i == 0){
                v.push_back(i);

                sum+=i;
            }
        
        }

        if(sum == n){
            cout<<" = ";
            
            for(int i =0; i<v.size()-1; i++){
                cout<<v[i]<<" + ";
            }

            cout<< v[v.size()-1]<<endl;

            continue;
        }

        cout<< " is NOT perfect."<<endl;
    }
    

    return 0;
}