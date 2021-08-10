#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    int T;
    int N;
    int C;
    float G;

    

    cin>> T;

    vector< pair<int,float> > result;

    for(int i =0; i<T;i++){
        cin>>N;

        int sumC=0;
        float sumG=0.0;

        for(int j=0; j<N;j++){
            cin>>C>>G;

            sumC += C;
            sumG += (C*G);

        }
        result.push_back(make_pair(sumC, round(10*sumG/sumC)/10));
    }

    for(int i=0;i<T;i++){
        printf("%d %.1f\n", result[i].first, result[i].second);
    }

    return 0;
}