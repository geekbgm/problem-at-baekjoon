#include <iostream>
#include <string>

using namespace std;

string str;

int main(void){

	while(1){

		getline(cin, str);
		if (str == "END") break;

		for(int i =str.length()-1; i>=0 ; i --){
			cout<< str[i];
		}
		cout<<endl;
	}
	

	return 0;
}