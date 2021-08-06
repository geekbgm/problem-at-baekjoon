#include <iostream>

using namespace std;

int main(){

    int V ; 
    int vote_A=0;
    int vote_B=0;
    
    string voting;
    cin >> V >> voting;

    for (int i = 0; i < V; i++){
        if (voting[i] == 'A')
            vote_A += 1;
        else
            vote_B += 1;
    }
    if(vote_A == vote_B) { 
        cout << "Tie" << endl;
    }else if(vote_A>vote_B){
        cout<<"A"<<endl;
    }else{
        cout<<"B"<<endl;
    }
 

    return 0;
}