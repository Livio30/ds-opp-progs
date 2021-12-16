#include<iostream>
using namespace std;
class student
{
	int roll;
public: 
	void getinfo()
	{
		cout << "Enter Roll no: ";
		cin >> roll;
		cout << endl;
	}
};
class test :public student
{
	int mrks[5];
protected:
	double total=0;
public:
	void gett()
	{
		cout << "Enter marks for 5 subjects:\n";
		for (int i = 0;i <= 4;i++)
		cin >> mrks[i];
	}
	void showt()
	{
		for (int i = 0;i <= 4;i++)
			total += mrks[i];
	}
	void displayt()
	{
		cout << "Entered marks are: \n";
		for (int i = 0;i <= 4;i++)
			cout<< mrks[i]<<" ";
	}
};
class sports
{
protected:int smrks;
public:
	void gets()
	{
		cout <<"Enter sports marks:\n";
		cin >> smrks;
	}
	void displays()
	{
		cout << "\nEntered sports marks are: " << smrks << endl;
	}
};
class result:public sports,public test
{
	float res;
public:
	void totalr()
	{
		res = total + smrks;
		res = res / 6;
	}
	void displayr()
	{
		cout << "\nResult is: " << res << endl;
	}
};
int main()
{
	result r;
	r.getinfo();
	r.gett();
	r.gets();
	cout << endl;
	r.showt();
	r.displayt();
	r.displays();
	r.totalr();
	r.displayr();
	return 0;
}
