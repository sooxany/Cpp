#include <iostream>

using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main(void) {

	Rectangle rect;
	rect.width = 3;
	rect.height = 5;

	cout << "»ç°¢ÇüÀÇ ¸éÀûÀº " << rect.getArea() << endl;



	return 0;
}
