//
//  2908.cpp
//  june-30
//  상수문제
//  Created by 배경민 on 2021/06/30.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2;
    
    cin>>num1>> num2;
    
    string answer;
    
    for(int i=2; i>=0; i--){
        if(num1[i] < num2[i]){
            answer = num2; break;
        }else if(num1[i] > num2[i]){
            answer = num1; break;
        }
    }
    
    cout<<answer[2]<<answer[1]<<answer[0]<<endl;
    
    return 0;
}
