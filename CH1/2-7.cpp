#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {

	string song("Falling in love with you");
	string elvis("Elvis Presley");

	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù ���ڴ� " << elvis[0] << "?";
	
	cin >> singer;

	if (singer == elvis) {
		cout << "�¾ҽ��ϴ�";
	}
	else {
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl;
	}

	return 0;
}