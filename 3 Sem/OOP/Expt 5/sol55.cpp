#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class StringCom {
	string str;
public:
	StringCom() {
		cout << "Enter the string: ";
		cin >> str;
	}
	int operator ==(StringCom& obj) {
		if (str == obj.str) {
			return 1;
		}
		else {
			return 0;
		}
	}
	void display() {
		return;
	}

};
int main() {
	StringCom str1, str2;

	if (str1 == str2) {
		cout << "The strings are equal" << endl;
	}
	else {
		cout << "The strings are not equal" << endl;
	}
	_getch();
	return 0;
}