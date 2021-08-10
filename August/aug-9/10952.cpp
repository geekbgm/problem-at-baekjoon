#include <iostream>
#define MAX 100000

using namespace std;


int main(){
    
    int a,b;
    int result[MAX];

    int idx = 0;
    while (1)
    {
        cin>>a>>b;

        if(a==0&&b==0){
            break;
        }
        
        result[idx] = a+b;

        idx +=1;
    }

    for(int i =0; i<idx;i++){

        cout<<result[i]<<endl;

    }
    

    return 0;
}