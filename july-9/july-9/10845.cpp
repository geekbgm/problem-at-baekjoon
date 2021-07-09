//
//  10845.cpp
//  july-9
//
//  Created by 배경민 on 2021/07/09.
//

#include <iostream>
#include <queue>
#include <string>

#define TRUE 1
#define FALSE 0

#define MAX 10000

using namespace std;

typedef int Data;

typedef struct _queue{
    Data arr[MAX];
    int front;
    int rear;
    int size;
} Queue;

void InitQueue(Queue * pq){
    pq->size =0;
    pq->front = 0;
    pq->rear =0;
}
int getNextIdx(int idx){
    if(idx+1 >= MAX) return 0;
    return idx+1;
}
void setNextIdx(int *idx){
    if(*idx +1 >= MAX) *idx = 0;
    else (*idx)++;
}
 
int Empty(Queue * pq){
    if(pq->front == pq->rear) return TRUE;
    return FALSE;
}
int Full(Queue *pq){
    if(getNextIdx(pq->rear) == pq->front) return TRUE;
    return FALSE;
}
 
Data Front(Queue *pq){
    if(Empty(pq) == TRUE) return -1;
    return pq->arr[pq->front];
}
 
Data Back(Queue *pq){
    if(Empty(pq) == TRUE) return -1;
    return pq->arr[pq->rear -1];
}
 
void Push(Queue *pq, Data data){
    if(Full(pq) == TRUE) return;
    pq->arr[pq->rear] = data;
    setNextIdx(&(pq->rear));
    (pq->size)++;
}

Data Pop(Queue *pq){
    if(Empty(pq) == TRUE) return -1;
 
    int data = pq->arr[pq->front];
    setNextIdx(&(pq->front));
    (pq->size)--;
    return data;
}


int main(int argc, const char * argv[]) {
    int N;
    string str;
    
    
    Queue q;
    InitQueue(&q);
    
    cin >> N;
    
    for(int i=0; i<N; i++){
            string str;
            cin >> str;
     
            if(str == "push"){
                int data;
                cin >> data;
                Push(&q, data);
            }else if(str == "pop"){
     
                cout<< Pop(&q)<<endl;
     
            }else if(str == "size"){
                cout << q.size << endl;
     
            }else if(str == "empty"){
                
                cout << Empty(&q) << endl;
     
            }else if(str == "front"){
               
                cout << Front(&q) << endl;
     
            }else if(str == "back"){
                cout << Back(&q) << endl;
            }
     
        }

    return 0;
}
