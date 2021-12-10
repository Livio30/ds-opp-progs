#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	int integerValue;

	cout << " Before a bad input operation:"
		<< "\n cin.rdstate(): " << cin.rdstate()
		<< "\n cin.eof(): " << cin.eof()
		<< "\n cin.fail(): " << cin.fail()
		<< "\n cin.bad(): " << cin.bad()
		<< "\n cin.good(): " << cin.good()
		<< "\n\n Expects an integer, but enter a character: ";
	cin >> integerValue; 
	cout << endl;

	cout << " After a bad input operation:"
		<< "\n cin.rdstate(): " << cin.rdstate()
		<< "\n cin.eof(): " << cin.eof()
		<< "\n cin.fail(): " << cin.fail()
		<< "\n cin.bad(): " << cin.bad()
		<< "\n cin.good(): " << cin.good() << endl << endl;

	cin.clear();
	cout << " After cin.clear()" << "\n cin.fail(): " << cin.fail() << "\n cin.good(): " << cin.good() << endl;

	_getch();
}
