#include<iostream>
using namespace std;
class ind {
	public:
	int a;
	ind () {}
	void getdata() {
		cout<<"Enter a number: ";
		cin>>a;
	}
	void operator ++ () {
		a = ++a;
	}
	void operator -- () {
		a = --a;
	}
	void display () {
		cout<<"Entered Number: " << a << endl;
	}
	void count () {
		cout << a << endl;
	}
};

int main () {
	ind i;
	i.getdata();
	i.display();
	++i;
	cout<< "Increment: ";
	i.count();
	--i;
	cout<<"Decrement: ";
	i.count();
	return 0;
}
