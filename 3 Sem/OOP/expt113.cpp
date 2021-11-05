#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	const int arrSize = 11;
	int arr[arrSize] = { 0, 1, 0, 2, 0, 4, 0, 2, 0, 1, 0 };
	cout << "Grade Distribution"<<endl;
	for (int i = 0; i < arrSize; i++)
	{
		if (i == 0)
			cout << "0 - 9\t:";
		else if (i == 10)
			cout << "100\t:";
		else
			cout << i * 10 << " - " << (i * 10) + 9 << " :";
		for (int j = 0; j < arr[i]; j++)
			cout << "*";
		cout << endl;
	}
	_getch();
}
