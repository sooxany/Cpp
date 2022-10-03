// 정수형 배열의 동적 할당 및 반환

#include <iostream> 

using namespace std;

int main(void) {

	int n;
	cout << "입력할 정수의 개수는? ";
	cin >> n;

	int* p = new int[n];

	if (p == NULL) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i << "번째 정수: ";
		cin >> p[i];
	}

	int sum = 0;
	int avg = 0;
	for (int i = 0; i < n; i++) {
		
		sum += p[i];
		avg = sum / n;

	}

	cout << "평균 = " << avg;

	delete[] p;


	return 0;
}