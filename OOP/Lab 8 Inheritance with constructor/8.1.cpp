// wap to take default constructor in both class &  perform inheritance

#include<iostream>
using namespace std;

class A {
	public:
	int a;
	A () {
		cout<<"Enter A: ";
		cin >> a;	
	}
};
class B : public A {
	public:
		int b;
		B () {
			cout<<"Enter B: ";
			cin >> b;
		}
		void display () {
			cout << "Sum: " << a + b;
		}
};

int main () {
	B b;
	b.display();
	return 0;
}
