#include<iostream>
using namespace std;

class A {
	public:
		int x;
		void getX () {
			cout << "Enter x: "; cin >> x;
		}
};

class B {
	public:
		int y;
		void getY () {
			cout<< "Enter y: "; cin >> y;
		}
};

class C : public A, public B {
	public:
		void Sum () {
			cout << "Sum: " << x + y;
		}
};

int main () {
	C c;
	c.getX();
	c.getY();
	c.Sum();
	return 0;
}
