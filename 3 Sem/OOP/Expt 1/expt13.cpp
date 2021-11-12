#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num;
	cout << "Enter the Number : ";
	cin >> num;
	
	if (num % 2)
		cout << "Given number is Odd";
	else
		cout << "Given number is Even";
	_getch();
}