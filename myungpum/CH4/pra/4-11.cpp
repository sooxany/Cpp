// string 클래스를 이용한 문자열 생성 및 출력

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str;
	string address("서울시 성북구 삼전동 389");
	string copyAddress(address);

	char text[] = { 'L','O','V','E',' ','C','+','+','\n' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;


	return 0;
}