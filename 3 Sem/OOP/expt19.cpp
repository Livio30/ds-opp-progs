#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i, arr[20], size, max;
	cout << "Enter the number of elements :";
	cin >> size;
	cout << "Enter the elements\n";
	for (i = 0;i < size;i++)
		cin >> arr[i];
	max = arr[0];
	for (i = 0;i < size;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
		cout << "Largest : " << max;
	_getch();
}
