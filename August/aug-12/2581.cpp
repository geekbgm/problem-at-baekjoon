#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int M, N, root, min, sum = 0; 

    cin>>M>>N;

    for(int i=M; i<=N; i++){

        root = sqrt(i);

        if(root == 1 && i != 1){
            if(!sum)
            min=i;
            sum+=i;
            continue;
        }

        if(i%2){    

            for(int j=2; j<=root; j++){

                if(!(i%j))
                    break;
                if(j == root){
                
                    if(!sum)
                        min = i;
                        
                    sum+=i;
                }
            }
        }
    }
    if(!sum)
        cout<<-1;
    else
        cout<<sum<<'\n'<<min<<'\n';

    return 0;
}