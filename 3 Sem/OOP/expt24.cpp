#include<iostream>
#include<conio.h>
using namespace std;

class bill {
public:
	float customerNo, units, totalBill;
	char customerName[20];
	void get() {
		cout << "Enter the Customer No. : ";
		cin >> customerNo;
		cout << "Enter the Customer Name : ";
		cin >> customerName;
		cout << "Enter the Units : ";
		cin >> units;
	}
	void calcBill() {
		if (units <= 100)
			totalBill = units * 1.20;
		else if (units <= 200)
			totalBill = 100 * 1.20 + (units - 100) * 2;
		else 
			totalBill = 100 * 1.20 + 100 * 2 + (units - 200) * 3;

		cout << "Total Bill : " << totalBill;
	}
};

void main() {
	bill b1, b2, b3, b4;
	b1.get();
	b1.calcBill();
	cout << endl;
	b2.get();
	b2.calcBill();
	_getch();
}
