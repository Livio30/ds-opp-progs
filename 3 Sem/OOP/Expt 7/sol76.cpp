#include <iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	cout << "Implemening showpoint:\n";
	cout << "Before using showpoint" << endl
		<< "9.9900 prints as: " << 9.9900 << endl
		<< "9.9000 prints as: " << 9.9000 << endl
		<< "9.0000 prints as: " << 9.0000 << endl;
	cout << showpoint
		<< "After using showpoint" << endl
		<< "9.9900 prints as: " << 9.9900 << endl
		<< "9.9000 prints as: " << 9.9000 << endl
		<< "9.0000 prints as: " << 9.0000 << endl << endl;

	cout << "Implementing left, right and internal justification:\n";
	int a = 12345;
	cout << "Default is right justified:" << endl << setw(10) << a;
	cout << "\nUse std::left to left justify x:\n" << left << setw(10) << a;
	cout << "\nUse std::right to right justify x:\n" << right << setw(10) << a << endl << endl;

	cout << "Implementing scientific and fixed notation:\n";
	double x = 0.001234567;
	double y = 1.946e9;
	cout << "Displayed in default format:" << endl << x << '\t' << y << endl;
	cout << "Displayed in scientific format:" << endl << scientific << x << '\t' << y << endl;
	cout << "Displayed in fixed format:" << endl << fixed << x << '\t' << y << endl << endl;

	cout << "Implementing boolalpha:\n";
	bool booleanValue = true;
	cout << "BooleanValue is " << booleanValue << endl;
	cout << "BooleanValue (after using boolalpha) is " << boolalpha << booleanValue << endl;
	cout << "Switch booleanValue and use noboolalpha" << endl;
	booleanValue = false; 
	cout << noboolalpha; 
	cout << "BooleanValue is " << booleanValue << endl;
	cout << "BooleanValue (after using boolalpha) is " << boolalpha << booleanValue << endl;

	_getch();
	return 0;
}
