#include <iostream>
#include<conio.h>
using namespace std;

void sum(int x[2][2], int y[2][2]) {
	int sumArr[2][2] = { 0 };
	cout << "The sum of element of two integer multi-dimensional arrays are:" << endl;
	for (int i = 0; i<2; i++) {
		for (int j = 0; j<2; j++) 
			sumArr[i][j] = x[i][j] + y[i][j];
	}
	for (int i = 0; i<2; i++) {
		for (int j = 0; j<2; j++) 
			cout << sumArr[i][j] << "\t";
		cout << "\n";
	}
	return;
}

void sum(float x[2][2], float y[2][2]) {
	float sumArr[2][2] = { 0 };
	cout << "The sum of element of two float multi-dimensional arrays are:" << endl;
	for (int i = 0; i<2; i++) {
		for (int j = 0; j<2; j++)
			sumArr[i][j] = x[i][j] + y[i][j];
	}

	for (int i = 0; i<2; i++) {
		for (int j = 0; j<2; j++)
			cout << sumArr[i][j] << "\t";
		cout << "\n";
	}
	return;
}

int main()
{
	int iMDArr1[2][2] = { 0 };
	int iMDArr2[2][2] = { 0 };
	float fMDArr1[2][2] = { 0 };
	float fMDArr2[2][2] = { 0 };

	int i = 0, j = 0;

	cout << "Enter the value of elements for integer array1 at the index:" << endl;
	for (i = 0; i<2; i++) {
		for (j = 0; j<2; j++) {
			cout << "[" << i << "]" << "[" << j << "]" << ":\t";
			cin >> iMDArr1[i][j];
		}
	}

	cout << "Enter the value of elements for integer array2 at the index:" << endl;
	for (i = 0; i<2; i++) {
		for (j = 0; j<2; j++) {
			cout << "[" << i << "]" << "[" << j << "]" << ":\t";
			cin >> iMDArr2[i][j];
		}
	}
	sum(iMDArr1, iMDArr2);

	cout << "Enter the value of elements for integer array1 at the index:" << endl;
	for (i = 0; i<2; i++) {
		for (j = 0; j<2; j++) {
			cout << "[" << i << "]" << "[" << j << "]" << ":\t";
			cin >> fMDArr1[i][j];
		}
	}

	cout << "Enter the value of elements for integer array1 at the index:" << endl;
	for (i = 0; i<2; i++) {
		for (j = 0; j<2; j++) {
			cout << "[" << i << "]" << "[" << j << "]" << ":\t";
			cin >> fMDArr2[i][j];
		}
	}
	sum(fMDArr1, fMDArr1);

	_getch();
}
