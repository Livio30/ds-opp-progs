#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int s = 100;
	char str[s];
	cout << "Enter sentence:" << endl;
	cin.read(str, 25);
	cout << "The string read was:" << endl;
	cout.write(str,cin.gcount());
	_getch();
}