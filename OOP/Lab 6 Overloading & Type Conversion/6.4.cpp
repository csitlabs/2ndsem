#include<iostream>
using namespace std;
class Prime {
	public:
	int a;
	void getdata() {
		cout<<"Enter a number: ";
		cin>>a;
	}
	void operator - () {
		a = -a;
	}
	void display () {
		cout<<"Entered Number: " << a << endl;
	}
	void count () {
		cout << a << endl;
	}
};

int main () {
	Prime p;
	p.getdata();
	p.display();
	-p;
	cout<<"After - operator overloading : ";
	p.count();
	return 0;
}
