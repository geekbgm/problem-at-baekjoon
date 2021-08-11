#include <iostream>

using namespace std;

int main(){

    int T;

    int cost_of_Car;
    int number_of_options;

    int number_of_option;
    int cost_of_option;

    int total_cost;

    cin >> T;


    int *result = new int[T];

    for(int i =0 ; i<T; i++){
        total_cost = 0;

        cin >> cost_of_Car;
        cin >> number_of_options;

        total_cost += cost_of_Car;

        for(int i =0 ; i<number_of_options; i++){
            cin>>number_of_option;
            cin>>cost_of_option;
            
            total_cost += number_of_option*cost_of_option;
        }

        result[i] = total_cost;
    }


    for(int i=0;i<T;i++){
        
        cout<<result[i]<<endl;

    }
    
    return 0;
}