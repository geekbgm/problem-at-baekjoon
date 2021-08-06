#include <iostream>
#define MAX 100000

using namespace std;

int result[MAX];

int main(){
    int a, b;
    int i=0;

    while (1)
    {
        cin >> a >> b;

        if(a == 0 && b ==0){
            break;
        }

        result[i] = a+b;

        i += 1;
    }

    int size =i;

    for(int i =0; i<size; i++){
        cout<<result[i]<<endl;
    }
    
    return 0;
}