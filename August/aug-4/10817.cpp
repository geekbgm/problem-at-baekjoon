#include <iostream>
#include <algorithm>

using namespace std;



int main(){

    int A,B,C;
    int answer;

    cin>>A>>B>>C; // 수가 N개인 경우는 어떻게 할까..

    if(A>=B&&A>=C){
        if(B>C){
            answer = B;
        }else{
            answer =C;
        }
    }else if(B>=C&&B>=A){
        if(A>C){
            answer =A;
        }else{
            answer =C;
        }
    }else{
        if(A>B){
            answer = A;
        }else{
            answer = B;
        }
    }
    cout<<answer<<endl;
    
    return 0;
}