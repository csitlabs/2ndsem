#include<iostream>
using namespace std;
class reverse {
	public:
		int x,a;
		int rev, rem;
		void display () {
			cout<<"Enter number: ";
			cin>> x;
			a = x;
		}
		void reverser () {
			rev = 0, rem = 0;
			while (x!=0) {
				rev = x % 10;
				rem = rem * 10 + rev;
				x = x/10;
			}
			cout<<"Reverse of " << a << " is: " << rem;
		}
};
int main () {
	reverse r;
	r.display();
	r.reverser();
	return 0;
}
