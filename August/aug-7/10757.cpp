#include <iostream>
#include <string>
#include <vector>
#define MAX 100000

using namespace std;

int num1[MAX], num2[MAX];
int sum;
vector<int> answer;

int main(){

    string A,B,tmp;
    
    cin >> A >> B;
    
    if(A.size() < B.size()){
        tmp = A;
        A = B;
        B = tmp;
    }

    for(int i = 0; i<A.size();i++){
        num1[i+1] = A[i] -'0';
    }

    for(int i =0; i<B.size();i++){
        num2[i+1+(A.size()-B.size())] = B[i]-'0';
    }

    for(int i =A.size(); i>0; i--){

        sum = num1[i]+num2[i];

        if(sum>=10)
        {
            num1[i-1]++;
            sum -= 10;
        }
        answer.push_back(sum);
        
    }

    if(num1[0]!=0) cout<<1;

    for(int i=answer.size()-1;i>=0; i--){
        cout<<answer[i];
    }

    cout<<endl;

    return 0;
}