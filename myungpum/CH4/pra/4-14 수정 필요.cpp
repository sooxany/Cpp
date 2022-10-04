//문자열 처리 응용 - 덧셈 문자열을 입력받아 덧셈 실행

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0; // 문자열 내에 검색할 시작 인덱스
	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) {
			string part = s.substr(startIndex);
		}
	}




	return 0;
}