#include<iostream>
using namespace std;
int rev(int x) {
	int rem, rev=0;
	while (x!=0) {
		rem = x % 10;
		rev = rev * 10 + rem;
		x = x/10;
	}
	return rev;
}
int main () {
	int x, y;
	cout<<"Enter Number: ";
	cin>>x;
	y = rev(x);
	cout<<"Reverse of " << x << " is: " << y;
	return 0;
}
