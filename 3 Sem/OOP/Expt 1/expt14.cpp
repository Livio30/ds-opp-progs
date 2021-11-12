#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c, d = 0 , r1, r2;
	cout << "Enter the coefficient for the quadratic equation: \n";
	cin >> a >> b >> c;
	d = sqrt((b * b) - (4 * a * c));
	r1 = ((-1 * b) + d) / (2 * a);
	r2 = ((-1 * b) - d) / (2 * a);
	cout << "\n1st root : "<< r1;
	cout << "\n2st root : " << r2 ;
	_getch();
}