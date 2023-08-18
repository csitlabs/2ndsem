#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,y;
	char p;
	do{
		cout<<endl;
		cout<<"Enter first and second positive integer: ";
		cin>>x>>y;
		int a = x, b = y;
		int s1 = 0, s2 = 1, t1 = 1, t2 = 0;
		int q,r,s,t;
		while(b!=0){
			q = a/b;
			r = a%b;
			s = s2-q*s1;
			t = t2-q*t1;
			a = b;
			b = r;
			s2 = s1;
			s1 = s;
			t2 = t1;
			t1 = t;
		}
		cout<<endl<<"The gcd of "<<x<<" and "<<y<<" is "<<a<<" with  coefficients "<<s2<<" and "<<t2<<" respectively. "<<endl;
		cout<<"Do you want to continue?(y/n): ";
		cin>>p;
	}while(p=='y');
}
