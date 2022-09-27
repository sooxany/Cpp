#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();

};

Circle::Circle() : Circle(1) { }
Circle::Circle() : Circle(30) { }

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

double Circle::getArea() {

	return radius * 3.14 * 3.14;

}

int main(void) {

	Circle donut;
	double area = donut.getArea();
	cout << "donut�� ������ " << area << endl;

	Circle pizza;
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << endl;





	return 0;
}