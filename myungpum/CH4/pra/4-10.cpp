// Circle 배열의 동적 생성 및 반환 응용

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
	cout << "생성하고자 하는 원의 개수 ? ";
	cin >> n;

	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원" << i+1 << ": ";
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
	
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count;



	return 0;
}