#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int result =10;

    getline(cin, s);

    for(int i=1; i<=s.size();i++){
        if(s[i] == '('){
            if(s[i-1]==')') result +=10;
            else result += 5;
        }else if(s[i]==')'){
            if(s[i-1]==')') result +=5;
            else result +=10;
        }
    }

    cout<<result<<endl;

    return 0;
}