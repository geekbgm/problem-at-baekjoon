#include <iostream>
#include <string>

using namespace std;

int main(){

    int T;
    string s;
    int score=0;
    int count=0;

    cin >>T;

    int *result = new int[T];

    for(int i=0; i<T; i++){
        cin >> s;

        score = 0;
        count = 0;
        
        for(int j=0; j<s.size(); j++){
            if (s[j] == 'O') count++;
			else  count = 0;
			score += count;
        }

        result[i] = score;

        
    }

    for(int i=0 ;i<T;i++){
        cout<<result[i]<<endl;
    }


    return 0;
}