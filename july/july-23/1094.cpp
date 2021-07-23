#include <iostream>

using namespace std;

int main(){
    
    int target, cnt=0;
    cin >> target ;

    while(target>0){
        if(target%2 == 1) cnt ++;
        target /= 2;
    }

    cout << cnt<< endl;

    return 0;
}