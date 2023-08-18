#include<iostream>
using namespace std;
class large{
	int a,b;
	public:
	large() {
		a=0;
		b=0;
	}
	large (int x, int y ){
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
	large l(a,b);
	if(l.gety()>l.getx()){
		cout<<"The largest among "<<l.getx()<<" & "<<l.gety()<<" is: "<<l.gety(); 
	}
	else{
		cout<<"The largest among "<<l.getx()<<" & "<<l.gety()<<" is: "<<l.getx();
	}
return 0;
}
