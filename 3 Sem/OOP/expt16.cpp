#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int term1 = 0, term2 = 1, term3, num, i;
	cout << "Enter the number of terms: ";
	cin >> num;
	if (num == 1)
		cout << "Fibonacci series: " << term1;
	else if (num == 2)
		cout << "Fibonacci series: " << term1 << "\t" << term2;
	else
	{
		cout << "Fibonacci series: " << term1 << "\t" << term2;
		for (i = 2; i < num; i++)
		{
			term3 = term1 + term2;
			term1 = term2;
			term2 = term3;
			cout << "\t" << term3;
		}
	}
	_getch();
}