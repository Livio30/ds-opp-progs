#include <iostream>
#include<conio.h>
using namespace std;


int square(int x) {
	return x*x;
}

double square(double x) {
	return x*x;
}

int main()
{
	int x; double y;

	cout << "Enter the Int Number: ";
	cin >> x;
	cout << "Square of integer number is " << square(x) << endl;

	cout << "Enter the double Number: ";
	cin >> y;
	cout << "Square of double number is " << square(y) << endl;
	_getch();
}