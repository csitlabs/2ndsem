#include<iostream>
using namespace std;

class A {
	public:
		int a, b;
		void getSum () {
		cout <<"Enter Number: ";
		cin >> a >> b;
		}
};
class B : public A {
	public:
		void displaySum () {
		cout <<"Sum is: " << a + b <<endl; }
};

int main () {
	B b;
	b.getSum();
	b.displaySum();
	return 0;
}
