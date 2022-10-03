#include <iostream>

using namespace std;

struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r);
	double getArea();
};

StructCircle::StructCircle(int r) {
	radius = r;
}

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}


int main(void) {

	StructCircle waffle(3);
	cout << "¸éÀûÀº " << waffle.getArea();

	return 0;
}
