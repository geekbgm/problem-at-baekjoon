//
//  1157.cpp
//  july-16
//
//  Created by 배경민 on 2021/07/16.
//

#include <iostream>
#include <string>

using namespace std;

string word;
int alpha[100];

int main() {
    
    cin >> word;
    
    
    for(char c: word){
        if ('a'<=c)
            c = c-32;
        
        alpha[c] ++;
    }
    
    int threshold = 0;
    char ans='?';
    
    for(int al = 'A';al <= 'Z' ; al++){
        if (alpha[al]>threshold){
            threshold = alpha[al];
            ans = al;
        }
        else if(alpha[al]==threshold){
            ans = '?';
        }
    }
        
    cout<<ans<<endl;
    
    return 0;
}
