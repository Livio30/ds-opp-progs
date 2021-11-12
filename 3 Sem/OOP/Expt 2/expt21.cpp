#include<iostream>
#include<conio.h>

using namespace std;

class box {
public:
	int l, b, h, vol;

	void get() {
		cout << "Enter the length breadth and height of the box :";
		cin >> l >> b >> h;
	}
	void set() {
		cout << "Length :" << l << endl;
		cout << "Breadth :" << b << endl;
		cout << "Height :" << h << endl;
	}

	void calcVol() {
		vol = l*b*h;
		cout << "Volume :" << vol << endl;
	}
};

void main() {
	box b1, b2;
	b1.get();
	b1.set();
	b1.calcVol();

	_getch();
}