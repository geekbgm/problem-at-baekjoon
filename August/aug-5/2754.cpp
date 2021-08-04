#include <iostream>
#include <string>

using namespace std;

string s;
double score = .0;

int main(){

    cin >>s;

    for(int i=0; i<2;i++){
        switch (s[i])
        {
        case 'A':
            score +=4.0; 
            break;
        case 'B':
            score +=3.0;
            break;
        case 'C':
            score += 2.0;
            break;
        case 'D':
            score += 1.0;
            break;
        case 'F':
            score += 0.0;
            break;
        case '+':
            score += 0.3;
            break;
        case '-':
            score -=0.3;
            break;
        default:
            score +=.0;
            break;
        }
    }

    printf("%.1f\n", score);
    
    return 0;
}