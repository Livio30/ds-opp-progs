#include<iostream>
#include<conio.h>
using namespace std;

class temperatureLoc {
	int tempDegree;

public:

	//constructor 
	temperatureLoc() {
		cout << "Enter a positive integer: ";
		cin >> tempDegree;
	}
	//operator minus overloading
	void operator -() {
		tempDegree = -tempDegree;
	}

	void display() {
		cout << "The Negative integer is  " << tempDegree << endl;
		return;
	}

};

int main() {
	temperatureLoc loc;
	-loc;
	loc.display();
	_getch();
	return 0;
}