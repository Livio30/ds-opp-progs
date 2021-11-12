#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i, arr[20], size, sum = 0;
	cout << "Enter the number of elements :";
	cin >> size;
	cout << "Enter the elements\n";
	for (i = 0;i < size;i++)
		cin >> arr[i];
	for (i = 0;i < size;i++)
		sum += arr[i];
	cout << "Sum : " << sum;
	_getch();
}
