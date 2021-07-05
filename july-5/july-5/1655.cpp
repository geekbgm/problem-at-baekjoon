//
//  1655.cpp
//  july-5
//
//  Created by 배경민 on 2021/07/05.
//

#include <iostream>
#include <queue>
#define MAX 100010
using namespace std;


int N;
int Arr[MAX];

void Find(){
    priority_queue<int> Max_PQ, Min_PQ;
    
        for (int i = 0; i < N; i++)
        {
            if (Max_PQ.size() > Min_PQ.size()) Min_PQ.push(-Arr[i]);
            else Max_PQ.push(Arr[i]);
            
            if (Max_PQ.empty() == false && Min_PQ.empty() == false)
            {
                if (Max_PQ.top() > -Min_PQ.top())
                {
                    int Max_Value = Max_PQ.top();
                    int Min_Value = -Min_PQ.top();
     
                    Max_PQ.pop(); Min_PQ.pop();
                    
                    Max_PQ.push(Min_Value);
                    Min_PQ.push(-Max_Value);
                }
            }
            cout << Max_PQ.top() << endl;
        }

}

int main(int argc, const char * argv[]) {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 0 ; i <N ; i++) cin >> Arr[i] ;
    
    Find();
    
    return 0;
}
