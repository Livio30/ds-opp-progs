#include<iostream>
#include<conio.h>
using namespace std;

class fraction {
	int num;
	int den;

public:
	fraction() {
		num = den = 1;
	}

	fraction(int n, int d) {
		num = n;
		den = d;
	}

	fraction(fraction &obj) {
		num = obj.num;
		den = obj.den;
	}
	void eval_func() {
		double result;
		if (num == den) {
			result = 1;
		}
		else if (den == 0) {
			cout << "Invalid denominator" << endl;
			result = num;
			return;
		}
		else {
			result = (double)num / den;
		}
		cout << "The result of the evaluation is " << result <<endl;
	}
	friend void display(fraction &obj);
};

void display(fraction& obj) {
	cout <<"Result: "<<obj.num << "/" << obj.den << endl;
}

int main() {
	int n, d;

	cout << "Calling Default Constructor" << endl;
	fraction obj;
	display(obj);
	cout << "Calling Parameterised Constructor" << endl;
	cout << "Enter numerator and denominator :";
	cin >> n >> d;
	fraction obj2(n,d);
	obj2.eval_func();
	display(obj2);
	cout << "Calling Copy Constructor" << endl;
	fraction obj3(obj2);
	display(obj3);


	_getch();
	return 0;
}