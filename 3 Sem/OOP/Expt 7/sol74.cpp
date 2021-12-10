#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout << "Enter a decimal number" << endl;
	cin >> n;
	cout << n << " in HexaDecimal is: " << hex << n << endl;
	cout << dec << n << " in Octal is: " << oct << n << endl;
	cout << setbase(10) << n << " in decimal is: " << n << endl;
	_getch();
}