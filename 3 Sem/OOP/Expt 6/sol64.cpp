#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
protected:
	int x, y;
public:
	void get()
	{
		cout << "Enter value for X and Y\n";
		cin >> x >> y;
	}
	virtual void area()
	{

	}

};
class triangle:public shape
{
public:
	void area()
	{
		cout<<"Area of triangle is :"<<0.5*x*y;
	}
};
class rectangle:public shape
{
public:
	void area()
	{
		cout<<"Area of rectangle is :"<< x*y;
	}
};
int main()
{
	shape s;
	shape *bptr;
	rectangle r;
	triangle t;
	r.get();
	bptr = &r;
	bptr->area();
	cout << endl<<endl;
	t.get();
	bptr = &t;
	bptr->area();
	return 0;
}
