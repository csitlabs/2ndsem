#include<iostream>
using namespace std;

class base {
	public:
		int a, b;
		base () {
			cout<<"Sum: ";
		}
};

class child : public base {
	public:
	child (int x, int y){
	a = x;
	b = y;
	}
	void display () {
		cout<< a + b <<endl;
		}
};

int main () {
	int q,w;
	cout<<"Enter Numbers: ";
	cin>>q>>w;
	child c(q,w);
	c.display();
	return 0;
}
