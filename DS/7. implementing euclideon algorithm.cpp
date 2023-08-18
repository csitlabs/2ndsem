#include<iostream>

using namespace std;

int main(){
	int x,y,r;
	char q;
	do{
		cout<<endl;
		cout<<"Enter first positive integer: ";
		cin>>x;
		cout<<"Enter second positive integer: ";
		cin>>y;
		while(y!=0){
			r = x%y;
			x = y;
			y = r;
		}
		cout<<"The gcd of these integers is "<<x<<endl;
		cout<<"Do you want to continue?(y/n): ";
		cin>>q;
	}while(q=='y');
}
