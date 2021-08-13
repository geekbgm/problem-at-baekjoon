#include <iostream> 
#include <algorithm> 
#define MAX 4

using namespace std; 

int main(void) { 
    
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    
    int sum = 0; 
    int result = 0; 
    int descend, ascend;

    for (int i = 0; i < MAX; i++) { 
         
        cin >> descend >> ascend; 
        
        sum += (ascend - descend);
        result = max(result, sum);
         
    } 
    
    cout << result << "\n"; 
    
    return 0; 
}

