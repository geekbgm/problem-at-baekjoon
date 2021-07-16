//
//  main.cpp
//  test
//
//  Created by 배경민 on 2021/07/15.
//

#include <iostream>

using namespace std;

int c = 12;
int *p;
int tes;
int a[10];

int main() {
    
//    for(int i = 0; i<10; i++) cin >> a[i];
    
    p= &c; //포인터변수 p에 변수 c의 주소를 저장한다.
    //*의 역할은 주소값에 해당하는 어떤 값을 출력하게 하는 것 ; *의 입력 값으로 주소 값만 받는다.
    //&는 변수에 할당되어 있는 주소값을 반환하게 하는 것 ; &의 입력값은
    
    tes = 0x100008040; //포인터에 들어와 있는 값의 자료형은 long이다. 뭐지 그러면...
    
    cout<<p<<endl;
    
    return 0;
}
