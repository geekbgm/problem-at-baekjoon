#include <iostream>
#include <vector>

using namespace std;

int n, answer = INT_MIN;
string str;

int calculate(int a, int b, char opt){
    switch (opt)
    {
    case '+':
        a += b;
        break;
    case '-':
        a -=b;
        break;
    case '*':
        a *=b;
        break;
    }
    return a ; 
}

void DFS(int idx, int cur){
    if(idx >= n){
        answer = max(answer, cur);
        return;
    }
    
    char opt = idx == 0 ? '+': str[idx-1];

    if(idx + 2 <n){
        int bracket = calculate(str[idx] - '0', str[idx + 2]-'0', str[idx + 1]);

        DFS(idx + 4, calculate(cur, bracket, opt));
    }

    DFS(idx + 2, calculate(cur, str[idx] -'0', opt));
}

int main(void){
    cin >> n>>str;

    DFS(0,0);
    cout<< answer;
}