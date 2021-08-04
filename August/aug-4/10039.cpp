#include <iostream>

using namespace std;

int main(){
    int score[5];
    int sum=0;
    int result;

    for(int i=0; i<5;i++){

        cin>>score[i];

        if(score[i]<40){
            score[i]=40;
        }
    }

    for(int i=0; i<5; i++){
        sum += score[i];
    }

    result = sum/5;

    cout << result <<endl;

    return 0;
}