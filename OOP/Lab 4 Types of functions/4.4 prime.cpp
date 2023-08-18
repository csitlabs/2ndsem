#include<iostream>
using namespace std;
void check() {
	int x, count = 0;
	cout<<"Enter a number: ";
	cin>>x;
	for (int i = 1; i <= x; i++) {
	if(x%i==0) {
		count++;
	}
	}
	if (count==2) {
		cout << "Number is prime.";
	}
	else {
		cout << "Number is not prime.";
	}
}
int main () {
	check();
	return 0;
}
