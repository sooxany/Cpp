// string Ŭ������ �̿��� ���ڿ� ���� �� ���

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str;
	string address("����� ���ϱ� ������ 389");
	string copyAddress(address);

	char text[] = { 'L','O','V','E',' ','C','+','+','\n' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;


	return 0;
}