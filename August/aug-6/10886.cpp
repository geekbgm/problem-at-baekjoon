#include <iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    int *vote = new int[N];
    int cute =0;
    int not_cute = 0;

    for(int i =0 ;i<N; i++){

        cin >> vote[i];
        
        if(vote[i] ==1){
            cute += 1;
        }else{
            not_cute +=1;
        }
    }


    if(cute > not_cute){
        cout<<"Junhee is cute!"<<endl;
    }else{
        cout<<"Junhee is not cute!"<<endl;
    }

    return 0;
}