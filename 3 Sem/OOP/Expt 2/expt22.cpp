#include<iostream>
#include<conio.h>

using namespace std;

class employee {
public:
	char firstName[20], lastName[20];
	float monthlySalary, yearlySalary;

	void get() {
		cout << "Enter First Name : ";
		cin >> firstName;
		cout << "Enter Last Name : ";
		cin >> lastName;
		cout << "Enter Monthly Salary : ";
		cin >> monthlySalary;
	}
	void calcYearlySalary() {
		yearlySalary = monthlySalary * 12;
		cout << "Yearly Salary Calculated" << endl;
	}
	void display() {
		cout << "First Name : " << firstName << endl;
		cout << "Last Name : " << lastName << endl;
		cout << "Monthly Salary : " << monthlySalary << endl;
		cout << "Yearly Salary : " << yearlySalary << endl;
	}
};

void main() {
	employee e1, e2;
	e1.get();
	e1.calcYearlySalary();
	e1.display();
	cout << endl;
	e2.get();
	e2.calcYearlySalary();
	e2.display();
	_getch();
}