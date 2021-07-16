//
//  9471.cpp
//  july-12
//  피사노 주기
//  Created by 배경민 on 2021/07/12.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    
    int P,N,M;
    int count,a,b;
    
    cin >> P;
    
    for (int i = 0; i<P;i++){
        cin >> N >> M;
        count =0;
        a=b=1;
        while(1){
            int tmp = (a + b) % M;
            a = b;
            b = tmp;
            count++;
            
            if (a==1 && b == 1) break;
        }
        cout<<N<<" "<<count<<endl;
    }
    
    return 0;
}
