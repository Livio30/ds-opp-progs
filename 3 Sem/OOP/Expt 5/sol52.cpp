#include<iostream>
#include<conio.h>
using namespace std;

class Time {
	int hours;
	int minutes;
public:

	Time() {
		cout << "Enter the intial value of the hours: ";
		cin >> hours;
		cout << "Enter the intial value of the minutes: ";
		cin >> minutes;
	}
	void operator ++() {
		minutes = minutes + 1;
		if (minutes >= 60) {
			hours += 1;
			minutes = 0;
		}
	}
	void display() {
		cout << "The time is " << hours << ":" << minutes << endl;
		return;
	}

};

int main() {
	Time obj;
	++obj;
	obj.display();
	_getch();
	return 0;
}