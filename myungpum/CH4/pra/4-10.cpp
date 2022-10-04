// Circle �迭�� ���� ���� �� ��ȯ ����

#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r);
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }

};

int main(void) {

	int n, radius;
	int count = 0;
	cout << "�����ϰ��� �ϴ� ���� ���� ? ";
	cin >> n;

	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "��" << i+1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	Circle* p = pArray;

	for (int i = 0; i < n; i++) {
		cout << p->getArea() << " ";
		if (p->getArea() >= 100 && p->getArea() <= 200) {
			count++;
		}
		p++;
	}
	
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count;



	return 0;
}