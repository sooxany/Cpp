// ������ �迭�� ���� �Ҵ� �� ��ȯ

#include <iostream> 

using namespace std;

int main(void) {

	int n;
	cout << "�Է��� ������ ������? ";
	cin >> n;

	int* p = new int[n];

	if (p == NULL) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i << "��° ����: ";
		cin >> p[i];
	}

	int sum = 0;
	int avg = 0;
	for (int i = 0; i < n; i++) {
		
		sum += p[i];
		avg = sum / n;

	}

	cout << "��� = " << avg;

	delete[] p;


	return 0;
}