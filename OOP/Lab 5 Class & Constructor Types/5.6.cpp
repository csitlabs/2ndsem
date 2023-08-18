#include<iostream>
using namespace std;
class subt{
	int a,b;
	public:
	subt () {
		a=0;
		b=0;
	}
	subt (int x, int y ){
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
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	subt t(a,b);
		cout<<"Difference: " << t.getx() - t.gety()<< endl; 
return 0;
}
