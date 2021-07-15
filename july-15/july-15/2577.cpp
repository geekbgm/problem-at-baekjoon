//
//  2577.cpp
//  july-15
//
//  Created by 배경민 on 2021/07/15.
//

#include <iostream>

using namespace std;
int a, b, c;
int table[10];

int main(void){

    cin >> a >> b >> c;
    
    int mulres = a*b*c;
    
   
    while(mulres != 0){
        table[mulres % 10] +=1;
        mulres /= 10;
    }
    
    //출력.
    for(int i=0; i<10; i++){
        cout << table[i] << endl;
    }
    
    
    return 0;
}
