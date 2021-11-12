#include<iostream>
#include<conio.h>
using namespace std;

int power(int base, int exponent) {
	if (exponent == 1)
		return base;
	return base*power(base, exponent - 1);
}

int main() {
	int base = 0, exponent = 0;

	cout << "Enter the base value:\t";
	cin >> base;
	cout << "Enter the exponent:\t";
	cin >> exponent;

	if (exponent < 1) {
		cout << "Please enter exponent greater or equal to 1";
	}
	else {
		cout << "Result: " << power(base, exponent);
	}

	_getch();
}