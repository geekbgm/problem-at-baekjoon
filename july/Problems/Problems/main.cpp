//
//  main.cpp
//  Problems
//
//  Created by 배경민 on 2021/07/17.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    char data2[] = {'a','b','c'};
    char *i = &data2[0]; // data2는 배열의 첫번째 주소값을 의미한다.
    
    printf("%d %x\n",i,i);
    
    printf("%d %x\n",i+1,i+1);
    
    printf("%d %x\n",i+2,i+2);
    
    
//    cout << i << endl;
//    cout << (i+1) <<endl;
    

    return 0;
}
