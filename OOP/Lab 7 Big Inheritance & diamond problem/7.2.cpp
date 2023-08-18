#include<iostream>
using namespace std;

class shape {
	public:
		float length, breadth, base;
		void getDimension () {
			cout<<"Enter Length: "; cin>>length;
			cout<<"Enter Breadth: "; cin>>breadth;
			cout<<"Enter Base: "; cin>>base;
		}
};

class rectangle: public shape {
	public:
		float area1;
		void areaR () {
			area1 = length * breadth;
		}
		void displayR () {
			cout << "Area of Rectangle: " << area1 << " sq. units " <<endl;
		}
};

class triangle: public shape {
	public:
		float area2;
		void areaT () {
			area2 = 0.5*base*length;
		}
		void displayT () {
			cout<<"Area of Triangle: " << area2 << " sq. units " <<endl;
		}
};

int main () {
	rectangle r;
	r.getDimension();
	r.areaR();
	r.displayR();
	
	triangle t;
	t.getDimension();
	t.areaT();
	t.displayT();
	return 0;
}
