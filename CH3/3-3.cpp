#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {

	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;

}

Circle::Circle(int r) {

	radius = r;
	cout << "������ " << radius << " �� ����" << endl;

}

double Circle::getArea() {

	return 3.14 * radius * radius;

}

int main(void) {

	Circle donut;
	cout << "donut�� ������ " << donut.getArea() << endl;

	Circle pizza(30);
	cout << "pizza�� ������ " << pizza.getArea() << endl;


	return 0;
}