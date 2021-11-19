#include<iostream>
#include<conio.h>
using namespace std;

class complexNum {

	float real, imag;

public:

	complexNum() {
		cout << "Enter the value of the real value: ";
		cin >> real;
		cout << "Enter the value of the imagnary: ";
		cin >> imag;
	}
	complexNum(int a, int b) {
		real = a;
		imag = b;
	}

	void display() {
		cout << "The result of the opeartion is " << real << " + " << imag << "i" << endl;
	}

	complexNum operator +(complexNum& obj) {
		complexNum result(0, 0);
		result.real = real + obj.real;
		result.imag = imag + obj.imag;
		return result;
	}

	complexNum operator -(complexNum& obj) {
		complexNum result(0, 0);
		result.real = real - obj.real;
		result.imag = imag - obj.imag;
		return result;
	}

	friend complexNum operator *(complexNum& obj1, complexNum& obj2);
	friend complexNum operator /(complexNum& obj1, complexNum& obj2);

};

complexNum operator *(complexNum& obj1, complexNum& obj2) {
	complexNum result(0, 0);
	result.real = (obj1.real * obj2.real) - (obj1.imag * obj2.imag);
	result.imag = (obj1.real * obj2.imag) + (obj1.imag * obj2.real);
	return result;
}

complexNum operator /(complexNum& obj1, complexNum& obj2) {
	complexNum result(0, 0);
	result.real = obj1.real + obj2.real;
	result.imag = obj1.imag + obj2.imag;
	return result;
}

int main() {
	complexNum num1, num2, resultA(0, 0), resultS(0, 0), resultM(0, 0), resultD(0, 0);

	resultA = num1 + num2;
	cout << "ADDITION" << endl;
	resultA.display();

	resultS = num1 - num2;
	cout << "SUBTRATION" << endl;
	resultS.display();

	resultM = num1 * num2;
	cout << "MULTIPLICATION" << endl;
	resultM.display();

	resultD = num1 + num2;
	cout << "DIVISION" << endl;
	resultD.display();

	_getch();
	return 0;
}