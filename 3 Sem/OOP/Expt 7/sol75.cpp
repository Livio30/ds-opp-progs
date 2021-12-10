#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double r2 = sqrt(2.0);
	
	cout << "Square root of 2 with precision 0-9.\n";
	cout << "Precision set by ios_base member function precision: \n";
	cout << fixed;
	
	for (int i = 0;i <= 9;i++)
	{
	cout.precision(i);
	cout << r2 << endl;
	}
	cout << "\nPrecision set by io manipulator member function setprecision: \n";
	for (int i = 0;i <= 9;i++)
		cout << setprecision(i) << r2 << endl;
	_getch();
}