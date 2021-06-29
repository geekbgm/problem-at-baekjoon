//
//  2748.cpp
//  jun-29
//  dynamic programming을 이용해서 파보나치 수열 구하기
//  Created by 배경민 on 2021/06/29.
//

#include <iostream>

using namespace std;

long long dynamic[90];

long long fabonachi(int n){
    if(n==1||n==2){
        return 1;
    }
    if (dynamic[n] != 0) {
        return dynamic[n];
    }
    else{
        dynamic[n] = fabonachi(n-1)+ fabonachi(n-2);
    }
    return dynamic[n];
}


int main(int argc, const char * argv[]) {
    int n;
    cin >>n;
    cout<< fabonachi(n);
    return 0;
}
