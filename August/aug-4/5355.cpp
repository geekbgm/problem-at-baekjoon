#include <iostream>
#include <string>

using namespace std;

int main(){
    int T;
    float calc;
    string s;
    
    cin >>T;

    float *result = new float[T];

    for(int i=0; i<T;i++){

        cin >> calc;
        getline(cin,s);
        
        for (int j = 0; j < s.size(); j++){
            if (s[j] == '@')
                calc *= 3;
            if (s[j] == '%')
                calc += 5;
            if (s[j] == '#')
                calc -= 7;
        }
 
        result[i] = calc;
    }

    for(int i =0 ; i <T; i++){
        printf("%.2f\n",result[i]);
    }

    return 0;
}
