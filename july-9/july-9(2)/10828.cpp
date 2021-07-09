//
//  10828.cpp
//  july-9(2)
//
//  Created by 배경민 on 2021/07/09.
//

#include <iostream>
#include <string>

#define TRUE 1
#define FALSE 0
#define MINUS -1
#define MAX 10000

using namespace std;

typedef struct _stack{
    int arr[MAX];
    int top;
    
} Stack;
 
void StackInit(Stack * sp){
    sp->top = -1;
}
 
int IsEmpty(Stack * sp){
    if(sp->top == -1) return TRUE;
    
    return FALSE;
}
 
int Size(Stack *sp){    //스택의 size 반환
    return sp->top + 1;
}
 
 
int IsFull(Stack * sp){        //스택이 꽉 차있는지 확인
    if(sp->top + 1 >= MAX) return TRUE;
    
    return FALSE;
}
 
void Push(Stack * sp, int data){    //스택의 push
    if(IsFull(sp)==TRUE) return;
    
    //가장 상위 인덱스를 하나 올린 후 data 삽입
    sp->arr[++(sp->top)] = data;
}
 
int Pop(Stack *sp){    //스택의 pop.
    if(IsEmpty(sp) == TRUE) return MINUS;
 
    //top이 가리키는 값을 반환 후 top을 하나 내림.
    return sp->arr[(sp->top)--];
}
 
int Top(Stack *sp){    //스택의 맨위의 인자를 반환합니다.
    if(IsEmpty(sp) == TRUE) return MINUS;
    
    return sp->arr[sp->top];
}

int main(int argc, const char * argv[]) {
    int N;
    int data;
    string str;
    
    cin >> N;
    
    Stack stack;
    StackInit(&stack);
    
    for(int i =0; i < N ; i++){
        
        cin >> str;
        
        if(str == "push"){
            cin >> data;
            Push(&stack, data)
        }
        else if(str == "pop"){
            cout<<Pop(&stack)<<endl;
        }else if(str == "empty"){
            cout<<IsEmpty(&stack)<<endl;
        }else if(str == "size"){
            cout<<Size(&stack)<<endl;
        }else if(str == "top"){
            cout<< Top(&stack)<<endl;
        }
        
    }
    return 0;
}
