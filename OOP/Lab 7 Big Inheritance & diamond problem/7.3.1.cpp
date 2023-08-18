#include<iostream>
using namespace std;
class A {
public:
	void dA () {
	cout << "From Class A" << endl; }
};

class B : virtual public A {
public:
	void dB () {
	cout<<"From Class B"<< endl; }
};

class C : virtual public A {
public:
	void dC () {
		cout<<"From Class C"<< endl; }
};

class Z : public B, public C {
public:
	void zZ () {
		cout<<"From Class Z"<< endl; }
};

int main() {
	Z z;
	z.dA();
	z.dB();
	z.dC();
	z.zZ();
	return 0;
}
