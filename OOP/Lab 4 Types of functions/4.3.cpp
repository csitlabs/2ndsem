#include<iostream>
using namespace std;
int check() {
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	if(x%2==0) {
		return 0;
	}
	else {
		return 1;
	}
}
int main () {
	int y, x;
	y = check();
	if (y==0) {
		cout << "Number is even. ";
		}
	else {
		cout << "Number is odd. ";
	}
	return 0;
}
