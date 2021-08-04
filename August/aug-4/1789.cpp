#include <iostream>

using namespace std;

long long S;

int max_N(){

        int num = 1; //1부터 더해나가야 N의 최댓값
        int result = 0;
        long long sum = 0;

        while(1){

                 sum += num;
                 result++;

                 if (sum > S){
                         result--;
                         break;
                 }
                 num++;
        }

        return result;

}

 

int main(){

        cin >> S;

        cout << max_N() << endl;

        return 0;
}
