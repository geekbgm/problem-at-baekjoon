#include <iostream>
#include <queue>
#define max 1000001

using namespace std;

#define ll long long
 
int n, a[max], b, c;

ll result;

int main(){
    cin >> n ; 

    for(int i=1; i<=n; i++) cin >>  a[i];

    cin >> b >> c;

    for(int i=1; i<=n; i++){
        // 1) 총 감독관의 수
        // 총 감독관은 한반에 한명씩 꼭 들어갑니다.
        a[i] = a[i] - b;
        result++;

        // 2) 부 감독관의 수
        // 남은 응시생이 있어야 부 감독관이 들어갑니다.
        if(a[i] > 0) {
            // 나눗셈을 통해 부 감독관의 수를 계산합니다.
            result += a[i] / c;

            // 나머지가 있으면 부 감독관을 한명더 늘려줍니다.
            if(a[i] % c > 0) result++;
        }
    }
    
    cout << result<<endl;
    
    return 0;
}