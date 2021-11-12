#include <iostream>
#include<conio.h>
using namespace std;

int fn(int a = 10, int b = 20, int c = 30)
{
	int sum;
	sum = a + b + c;
	return (sum);
}

int main()
{
	cout << "Without Arguments" << endl;
	cout << "Sum : " << fn() << endl;
	cout << "One Arguments" << endl;
	cout << "Sum : " << fn(65) << endl;
	cout << "Two Arguments" << endl;
	cout << "Sum : " << fn(65, 30) << endl;
	cout << "Three Arguments" << endl;
	cout << "Sum : " << fn(65, 30, 8) << endl;
	_getch();
}