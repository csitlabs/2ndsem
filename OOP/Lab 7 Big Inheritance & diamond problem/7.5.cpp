#include<iostream>
using namespace std;

class A {
	public:
		int a;
		void getA () {
			cout << "Enter A: "; cin >> a;
		}
};

class B : public A {
	public:
		int b;
		void getB () {
			cout<< "Enter B: "; cin >> b;
		}
};

class C : public B {
	public:
		int c;
		void getC () {
			cout << "Enter C: "; cin >> c;
		}
		void displaySum () {
			cout << "Sum: " << a + b + c;
		}
};

int main () {
	C c;
	c.getA();
	c.getB();
	c.getC();
	c.displaySum();
	return 0;
}
