#include <iostream>
#include <string>
using namespace std;

int main(){

    string A,B;
    int count_A=0, count_B=0;
    int total;
    char opr;
    cin >> A>>opr>>B;

    if (opr == '+'){

        if (A.length() > B.length()){

            string result = A;

            int idx = A.length() - B.length();

            result[idx] = '1';

            cout << result << "\n";

        }else if (A.length() == B.length()){

            string result = A;
            result[0] = '2';
            cout << result << "\n";

        }else{

            string result = B;
            int idx = B.length() - A.length();
            result[idx] = '1';
            cout << result << "\n";

        }

    }else{

            int len = A.length() - 1 + B.length() - 1;
            string result = "1";
            
            for (int i = 0; i < len; i++) result += '0';
            
            cout << result << "\n";
    }


    return 0;
}