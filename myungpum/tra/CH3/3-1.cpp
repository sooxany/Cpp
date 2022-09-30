#include <iostream>

using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int h);
	int getHeight();
};

Tower::Tower() {

	height = 1;

}

Tower::Tower(int h) {

	height = h;

}

int Tower::getHeight() {

	return height;

}


int main(void) {

	Tower myTower;
	Tower seoulTower(100);

	cout << "height is " << myTower.getHeight() << "m" << endl;
	cout << "height is " << seoulTower.getHeight() << "m" << endl;


	return 0;
}
