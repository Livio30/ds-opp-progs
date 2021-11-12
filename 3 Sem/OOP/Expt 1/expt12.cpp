#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter value of Number 1 : ";
	cin >> num1;

	cout << "Enter value of Number 2 : ";
	cin >> num2;

	cout << "Sum : " << num1 + num2;
	cout << "\nAverage : " << (num1 + num2) / 2;
	_getch();
}