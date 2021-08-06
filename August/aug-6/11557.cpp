#include <iostream>
#include <string>
#include <map>

using namespace std;
int finding_max(int *arr, int size){
    int max;
    max = arr[0];
  
  for(int i=0; i < size;i++){

      if(max<arr[i]){
          max = arr[i];
      }
      // 최대값과 비교해 더 크면 최대값에 저장
  }

  return max;
}
int main(){

    int T,N;
    int max;
    map<int, string> m;

    cin>>T;

    string *result = new string[T];

    for(int i=0; i<T; i++){
        cin >> N;
        
        string *univ = new string[N];
        int *amount = new int[N];

        for(int j=0;j<N; j++){
            cin >> univ[j] >> amount[j];
            m.insert(make_pair(amount[j],univ[j]));
        }

        max = finding_max(amount, N);

        result[i] = m.find(max)->second;

    }
    
    for(int i=0; i<T;i++){
        cout<<result[i]<<endl;
    }

    return 0;
}