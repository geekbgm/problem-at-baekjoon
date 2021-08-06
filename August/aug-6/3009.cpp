#include <iostream>

using namespace std;

int x[4],y[4];
int result_x, result_y;

int main(){

    for(int i =0 ;i<3;i++){
        cin >> x[i] >> y[i];
    }

    if(x[0]==x[1]){
        result_x = x[2];
    }else if(x[1]==x[2]){
        result_x = x[0];
    }else{
        result_x = x[1];
    }

    if(y[0]==y[1]){
        result_y = y[2];
    }else if(y[1]==y[2]){
        result_y = y[0];
    }else{
        result_y = y[1];
    }

    cout << result_x <<" "<< result_y <<endl;
    
    return 0;
}