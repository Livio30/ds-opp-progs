#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num, i, fact = 1;
	cout << "Enter the number to find it's Factorial: ";
	cin >> num;
	if (num == 0 || num == 1)
		fact = 1;
	else
		for (i = 1;i <= num;i++)
			fact *= i;
	cout << "\nFactorial :" << fact;
	_getch();
}