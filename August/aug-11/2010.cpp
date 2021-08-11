#include <iostream>
using namespace std;
 
#define MAX  500000
 
int N;
int multitap[MAX];
 
int maxComputer(void)
{
        int result = multitap[0]; //첫 멀티탭은 다른 멀티탭이 안 꽂아져있으므로 모든 플러그 사용 가능
        for (int i = 1; i < N; i++)
        {
                 result -= 1; //기존 멀티탭 플러그 중 하나에 다음 멀티탭을 꽂아야하므로
                 result += multitap[i]; //다음 멀티탭 플러그 수만큼 꽂을 수 있다
        }
        return result;
}
 
int main(void)
{
        cin >> N;
 

        for (int i = 0; i < N; i++)
                 cin >> multitap[i];
 
        cout << maxComputer() << endl;
        return 0;
}