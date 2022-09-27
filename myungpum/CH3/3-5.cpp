#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
 	}

};

Point::Point() : Point(0, 0) { }

Point::Point(int a, int b)
	: x(a), y(b) { }

int main(void) {

	Point origin; //16번째 줄 호출
	Point target(10, 20);
	origin.show();
	target.show();

	return 0;
}