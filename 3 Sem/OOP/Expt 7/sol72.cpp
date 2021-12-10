#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout << "Enter A sentence" << endl;
	while (cin.get(ch))
	{
		if (ch == '!')
			cin.putback('$');
		else
			cout << ch;

		while (cin.peek() == '#')
			cin.ignore(1, '#');
	}
	_getch();
}