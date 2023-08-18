#include<iostream>
using namespace std;

class college {
	public:
		string collegename, collegelocation;
		void collegedata () {
			cout<<"Enter College Name: "; cin >> collegename;
			cout<<"Enter College Location: "; cin >> collegelocation;
		}
		void displayC () {
			cout<<"College Name: " << collegename;
			cout<<"\tCollege Location: " << collegelocation << endl;
		}
};

class faculty {
	public:
		string fname, stream;
		void getfacultydata () {
			cout<<"Enter Faculty: "; cin >> fname;
			cout<<"Enter Stream: "; cin >> stream; 
		}
		void displayF () {
			cout<<"Faculty: " << fname;
			cout<<"\tStream: " << stream << endl;	
		}
};

class student: public college, public faculty {
	public:
		string name, address, degree;
		void getstudentdata () {
			cout<<"Enter Name: "; cin >> name;
			cout<<"Enter Address: "; cin >> address;
			cout<<"Enter Degree: "; cin >> degree;
		}
		void displayS () {
			cout<<"Name: " << name;
			cout<<"\tAddress: " << address;
			cout<<"\tDegree: " << degree << endl;	
		}
};

int main () {
	student s;
	s.collegedata();
	s.displayC();
	s.getfacultydata();
	s.displayF();
	s.getstudentdata();
	s.displayS();
	return 0;
}
