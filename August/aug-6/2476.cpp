#include <iostream>

using namespace std;

int main(){
    int A,B,C;
    int T;

    cin >>T;

    int *result = new int[T];

    for(int i=0; i<T;i++){

        cin >>A>>B>>C;

        if(A == B){
            if(B == C){
                result[i] = 10000+A*1000;
            }else{
                result[i] = 1000 + B*100;
            }

        }else if(A==C){
            if(B == C){
            result[i] = 10000+A*1000;
            }else{
            result[i] = 1000 + A*100;
            }
        }else{
            if(B==C){
                result[i] = 1000 + B*100;
            }else{
                result[i] = max(max(A,B),C)*100;
            }

        }

    }

    int min=result[0];
    int max=result[0];

    // 배열 첫번째 값을 최소 최대값으로 설정
    for(int i=0; i<T;i++){
      
      if(min>result[i]){
          min = result[i];
      }
      // 최소값과 비교해 더 작으면 최소값에
      if(max<result[i]){
          max = result[i];
      }
      // 최대값과 비교해 더 크면 최대값에 저장
    }
    
    cout << max <<endl;
    

    return 0;
}