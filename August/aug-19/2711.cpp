#include <iostream>
#include <string>

using namespace std;

int main(){

    int T;

    cin >>T;

    int index;
    string w;
    for(int i=0; i<T;i++){
        cin >> index >> w;

        for (int j = 0; j < w.size(); j++)
        {
            if (j != index - 1)
                cout << w[j];
        }
        cout<<'\n';
    }

    return 0;
}