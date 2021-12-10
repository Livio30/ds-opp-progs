#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	const int s = 100;	char str1[s], str2[s], str3[s];
	cout << "Enter a sentence:\n";
	cin >> str1;
	cout << "\nThe string read with cin was:\n" << str1 << endl;
	cin.get(str2, 10);
    cout << "\nThe string read with cin.get was:\n" << str2 << endl;
	cin.getline(str3, 20);
	cout << "\nThe string read with cin.getline was:\n" << str3 << endl;
	_getch();
}