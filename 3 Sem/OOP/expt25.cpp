#include<iostream>
#include<conio.h>
using namespace std;

class time {
public:
	int min, hr;
	void get() {
		cout << "Enter the Hours and minutes : ";
		cin >> hr >> min;
	}
	void display() {
		cout << "Time is " << hr << ":" << min;
	}
	void addTime(time t1, time t2 ) {
		min = t1.min + t2.min;
		hr = min / 60;
		min = min % 60;
		hr += t1.hr + t2.hr;
		display();
	}
};

void main() {
	time t1, t2, t3;
	t1.get();
	t2.get();
	t3.addTime(t1, t2);

	_getch();
}
