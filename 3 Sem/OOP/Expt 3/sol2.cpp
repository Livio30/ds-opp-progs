#include <iostream>
#include<conio.h>
using namespace std;

const double pi = 3.14;


int area(int side) {
	return side * side;
}

double area(double radius) {	
	return (pi*radius*radius);
}

int area(int length, int breadth) {
	return length * breadth;
}

int main()
{
	int side, length, breadth;
	double radius;

	cout << "Enter the side of the Square: ";
	cin >> side;
	cout << "The area of the Square is " << area(side) << endl;

	cout << "Enter the length & breadth of the rectangle: ";
	cin >> length >> breadth;
	cout << "The area of the rectangle is " << area(length, breadth) << endl;
	

	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "The area of the Circle is " << area(radius) << endl;
	
	_getch();
}