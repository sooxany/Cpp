#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void) {

	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle Pizza;
	Pizza.radius = 30;
	area = Pizza.getArea();
	cout << "Pizza의 면적은 " << area;



	return 0;
}
