#include<iostream>
#include<conio.h>
using namespace std;
ostream& bell(ostream& output)
{
return output << "\a";
}
ostream& carraigeReturn(ostream& output)
{
return output << "\r";
}
ostream& tab(ostream& output)
{
return output << "\t";
}
ostream& endLine(ostream& output)
{
return output << "\n" << flush;
}
int main()
{
	cout << "Use Of tab and endline manipulator" << endLine;
	cout << "a" << tab << "b" << tab << "c" << endLine;
	cout << "Use of carraigeReturn and bell maniplulator" << endLine;
	cout << bell;
	cout << carraigeReturn << "-----" << endLine;
	_getch();
	 }