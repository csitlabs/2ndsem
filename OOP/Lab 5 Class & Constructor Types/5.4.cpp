#include<iostream>
using namespace std;
class area{
	int a,b;
	public:
	area() {
		a=0;
		b=0;
	}
	area (int x, int y ){
		a=x;
		b=y;
	}
	int getx(){
		return a;
	}
	int gety(){
		return b;
	}
};
int main(){
	int a,b;
	cout<<"Enter Length & Breadth: ";
	cin>>a>>b;
	area r(a,b);
		cout<<"Area is: "<<r.getx()*r.gety() << " sq. units "; 	
return 0;
}
