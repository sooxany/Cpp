//���ڿ� ó�� ���� - ���� ���ڿ��� �Է¹޾� ���� ����

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0; // ���ڿ� ���� �˻��� ���� �ε���
	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) {
			string part = s.substr(startIndex);
		}
	}




	return 0;
}