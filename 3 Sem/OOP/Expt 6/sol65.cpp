#include<iostream>
#include<string>
#include<cstring>
#include<conio.h>
using namespace std;
class media
{
protected:
	char title[50];
public:
	media(char*s)
	{
		strcpy(title, s);
	}
	virtual void display()
	{}
};
class book :public media
{
	int pages;
public:
	book(char*s, int n):media(s)
	{
		pages = n;
	}
	void display()
	{
		cout << "Tiltle: " << title;
		cout << "\nNumber of pages: " << pages;
	}
};
class video_tape :public media
{
	int time;
public:
	video_tape(char*s, int t) :media(s)
	{
		time = t;
	}
	void display()
	{
		cout << "Tiltle: " << title;
		cout << "\nPlaying time of tape: " <<time;
	}
};
int main()
{
	char*title = new char[30];
	int n, t;
	cout << "The book details:\n";
	cout << "Enter book title: ";
	cin >> title;
	cout << "Enter number of pages: ";
	cin >> n;
	cout << endl;
	book b(title, n);

	cout << "The video tape details:\n";
	cout << "Enter video tape title: ";
	cin >> title;
	cout << "Enter playing time of tape: ";
	cin >> t;
	cout << endl;
	video_tape v(title,t);

	media *list[2];
	list[0] = &b;
	list[1] = &v;
	cout << "Book details: \n";
	list[0]->display();
	cout << "\n\nVideo tape details: \n";
	list[1]->display();
	return 0;
	
}
