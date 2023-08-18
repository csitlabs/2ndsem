#include<iostream>
using namespace std;
class sum {
	public:
		int a,b;
		void display () {
			cout<<"Enter 2 numbers: ";
			cin>> a >> b;
		}
		void sumadd () {
			cout << "Sum is: " << (a+b);
		}
};
int main () {
	sum s;
	s.display();
	s.sumadd();
	return 0;
}
