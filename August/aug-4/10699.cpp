#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
    tm *t;
    time_t timer;
    string s = "";

    timer =time(NULL);
    
    t = localtime(&timer);

    //year
    s += to_string(t->tm_year+1900);
    s += "-";

    //month
    if(t->tm_mon+1 < 10){
        s += "0";
    }
    s += to_string(t->tm_mon+1);
    s += "-";

    //day
    if(t->tm_mday+1 < 10){
        s += "0";
    }
    s += to_string(t->tm_mday);
    
    cout<<s<<endl;

    return 0;
}