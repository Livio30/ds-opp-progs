#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class box {
	float length, breadth, height, volume;


public:
	box(float length)
	{
		volume = length*length*length;
	}
	box(float length, float breadth, float height)
	{
		 volume = length*breadth*height;
	}

	void display() {
		cout << "Volume : " << volume<<endl;
	}
};

int main() {
	float s, length, breadth, height, totalVolume;
	cout << "Enter the Length of cube : ";
	cin >> length;
	box cube(length);
	cube.display();

	cout << "Enter the Length, breadth & height: ";
	cin >> length >> breadth >> height;
	box cuboid(length, breadth, height);
	cuboid.display();

	_getch();
	return 0;
}