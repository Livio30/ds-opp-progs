#include<iostream>
#include<conio.h>
using namespace std;

class box {
	float l, b, h;

public:
	box(float argL = 3.6, float argB = 4.8, float argH = 6.3) {
		l = argL;
		b = argB;
		h = argH;
	}

	void display() {
		cout << "Lenght: " << l << " Breadth: " << b << " Height: " << h << endl;
	}
};

int main() {

	float l, b, h;
	cout << "Enter Lenght,  Breadth & Height :";
	cin >> l >> b >> h;
	box cube;
	cout << "Without passing  args" << endl;
	cube.display();
	box cuboid(l,b,h);
	cout << "Passing  args" << endl;
	cuboid.display();
	_getch();
	return 0;
}