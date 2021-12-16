#include<iostream>
#include<string>
using namespace std;
class BasicInfo
{
	string name, gender;
	int empID;
public:
	void getb()
	{
		cout << "Enter name,employee id and gender:\n";
		cin >> name >> empID >> gender;
	}
	void displayb()
	{
		cout << "Employee name: " << name << endl;
		cout << "Employee ID: " << empID << endl;
		cout << "Employee gender: " << gender << endl;
	}
};
class DeptInfo:public BasicInfo
{
	string deptName, designation;
	int salary;
public:
	void getd()
	{
		BasicInfo::getb();
		cout << "Enter department name,designation and salary:\n";
		cin >> deptName >> designation >> salary;
	}
	void displayd()
	{
		BasicInfo::displayb();
		cout << "Employee department name: " << deptName << endl;
		cout << "Employee designation: " << designation << endl;
		cout << "Employee salary: " << salary << endl;
	}
};
class LoanInfo:public BasicInfo
{
	string LoanType, Amount;
public:
	void getl()
	{
		BasicInfo::getb();
		cout << "Enter loan type and amount " << endl;
		cin >> LoanType >> Amount;
	}
	void displayl()
	{
		BasicInfo::displayb();
		cout << "Loan type: " << LoanType << endl;
		cout << "Amount: " << Amount << endl;
	}
};
int main()
{
	DeptInfo d;
	LoanInfo l;
	d.getd();
	d.displayd();
	cout << endl;
	l.getl();
	l.displayl();
	return 0;
}
