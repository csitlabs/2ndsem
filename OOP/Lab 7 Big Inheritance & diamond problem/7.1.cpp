#include<iostream>
using namespace std;

class A {
	public:
		void displayA () {
		cout <<"This is from Class A." << endl; }
};
class B : public A{
	public:
		void displayB () {
		cout <<"This is from Class B." <<endl; }
};

int main () {
	B b;
	b.displayA();
	b.displayB();
	return 0;
}
