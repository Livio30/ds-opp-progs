#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class BankAccount {
	string name;
	double balance;

public:
	BankAccount() {
		cout << "Enter the name of the account holder: ";
		cin >> name;
		balance = 0;
	}
	BankAccount(BankAccount &obj) {
		name = obj.name;
		balance = obj.balance;
	}

	~BankAccount() {
		cout << "destructor called";
	}

	void deposit(int amount) {
		balance += amount;
		cout << "Deposited : " << amount << endl;
		cout << "Total Balance: " << balance << endl;
		return;
	}

	void withdraw(int amount) {
		balance -= amount;
		cout << "Withdrawn : " << amount << endl;
		cout << "Total Balance: " << balance << endl;
		return;
	}
	void calculate_interest(float interestRate, int years) {
		double interest = 0.0;
		interest = (balance * interestRate * years) / 100;
		cout << "Interest amount : " << interest << endl;
		return;
	}

	friend void display(BankAccount&);
};

void display(BankAccount& obj) {
	cout << "Name : " << obj.name << endl;
	cout << "Total Balance: " << obj.balance << endl;
}

int main() {
	BankAccount customer1;
	BankAccount customer2(customer1);

	customer1.deposit(1000);
	customer1.withdraw(500);
	customer1.calculate_interest(4.2, 2);
	cout << "Object 1 " << endl;
	display(customer1);
	cout << "Object 2" << endl;
	display(customer2);

	_getch();
	return 0;
}