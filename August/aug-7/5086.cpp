#include <iostream>
#include <string>
#define MAX 100000

using namespace std;
string result[MAX];

int main(){

    int a, b;
    int i = 0;

    while (1){   
            
        cin >> a >> b;

        if(a == 0 && b==0){
            break;
        }

        if(b%a == 0){
            result[i] = "factor";
        }else if(a%b == 0){
            result[i] = "multiple";
        }else{
            result[i] = "neither";
        }

        i += 1;
    }

    int size = i;
    
    for(int i=0; i<size; i++){
        cout << result[i] <<endl;
    }
    

    return 0;
}