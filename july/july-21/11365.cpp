#include <iostream>
#include <string>

using namespace std;

string str;

int main(void){

	while(1){

		getline(cin, str); // 한줄씩 입력 받기
		if (str == "END") break; //END의 경우 stop loop

		for(int i =str.length()-1; i>=0 ; i --){
			cout<< str[i];
		} // 역순으로 출력

		cout<<endl; 
	}
	

	return 0;
}