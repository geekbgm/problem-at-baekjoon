//
//  2908.cpp
//  june-30
//  상수문제
//  Created by 배경민 on 2021/06/30.
//

#include <iostream>
using namespace std;

int main() {
    string num1, num2;
    
    cin>>num1>> num2;
    
    string answer;
    
    for(int i=2; i>0; i--){
        if(num1[2]<num2[2]){
            answer = num2;
        }else if(num1[2]>num2[2]){
            answer = num1;
        }
    }
    
    
    cout<<answer[2]<<answer[1]<<answer[0]<<endl;
    
    return 0;
}
