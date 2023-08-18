#include<iostream>
using namespace std;
void sum(int, int);
int main () {
	int a, b;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	sum(a,b);
	return 0;
}
void sum(int x, int y) {
	cout<<"Sum is: " << (x+y);
}
