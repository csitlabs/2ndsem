#include<iostream>
using namespace std;

class A {
	public:
		A (int x) {
			cout<<"Entered Number: ";
	}
};

class B:public A {
	public:
		B(int x):A(x){
		cout<<x;
		}
};

int main (){
int q;
cout<<"Enter a number: ";
cin>>q;
B b (q);
return 0;
}
