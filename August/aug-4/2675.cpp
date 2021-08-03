#include <iostream>
#include <string>

using namespace std;

int main(){

    int T,R;
    string s;
    string m;

    cin>> T;

    string *result = new string[T];

    for(int i=0 ; i<T; i++){
        m ="";
        cin >>R;
        getline(cin,s);
        //s.erase(remove(s.begin(), s.end(),' '),s.end());

        for(int j=0; j<s.size(); j++){
            for(int k=0; k<R;k++) {
                if(s[j]==' '){
                    continue;
                }else{
                    m+=s[j];
                }
            }
                     
        }
        result[i] = m;
    }
    
    for(int i = 0 ; i<T;i++){
        cout<<result[i]<<endl;
    }

    return 0;
}