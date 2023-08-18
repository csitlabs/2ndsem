#include<iostream>
#define true 1
using namespace std;
class calculator{
	public:
		int add (int a, int b) {
			return a+b;
		}
		int subtract (int a, int b) {
			return a-b;
		}
		int multiply (int a, int b) {
			return a*b;
		}
		int divide (int a, int b) {
			return a/b;
		}
};

int main () {
	int a, b, choice, x;
	class calculator c;
	cout<<"Enter Number: ";
	cin>>a>>b;
	while (true) {
	cout << "Enter 1 to Add " << endl
	<<"Enter 2 to Subtract " << endl
	<< "Enter 3 to Multiply " << endl
	<< "Enter 4 to Division " << endl
	<<"Enter 5 to exit " << endl;
	cin >> choice;
	
	if (choice==1) {
		x = c.add(a,b);
		cout<< "Addition: " << x << endl;
	}
	else if (choice==2) {
		x = c.subtract(a,b);
		cout<< "Subtraction: " << x << endl;
	}
	else if (choice==3) {
		x = c.multiply(a,b);
		cout<< "Multiplication: " << x << endl;
	}
	else if (choice==4) {
		x = c.divide(a,b);
		cout<< "Division: " << x << endl;
	}
	else if (choice==5) {
	exit(0);
	}
	else{
		cout<< "Invalid Choice! " << endl;
	}
}
return 0;
}
