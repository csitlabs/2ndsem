#include<iostream>
using namespace std;
class Point
{
private:
	int a;
public:
	Point(int x) { 
	a = x; 
	}
	Point (const Point &p1) {
	a = p1.a; 
	}
	int geta() 
	{ 
	return a;
	}
};
int main ()
{
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	Point p1(a);
	Point p2 = p1;
	cout << "p1.x = " << p1.geta() << endl;
	cout << "p2.x = " << p2.geta() << endl;
	return 0;
}
