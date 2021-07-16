//
//  9501.cpp
//  name of problem is "꿍의 우주여행" in korean
//
//  Created by 배경민 on 2021/06/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int testime;
    cin >> testime;
    
    for (int i =1 ; i<=testime;i++){
        int numroc, distan;
        
        int ans = 0;
        
        cin >> numroc >> distan;
        
        for (int j=1 ; j<=numroc;j++){
            int velocity, fuel, ratio;
            cin >> velocity >> fuel >> ratio;
            double t = distan/(double)velocity;
            
            if ((t*ratio)<=fuel){
                ans++;
            }
            
        }
        cout << ans<<endl;
        
    }
    return 0;
}
