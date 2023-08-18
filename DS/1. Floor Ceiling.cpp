#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double x,f,c;
	char q;
	
	do{
		cout<<"Enter a number:";
		cin>>x;
		
		f=floor(x);
		c=ceil(x);
		
		cout<<"The floor and ceiling function of "<<x<<" is "<<f<<" and "<<c<<" respectively.";
		
		cout<<"\n Do you want to continue?(y/n):";
		cin>>q;
	}while(q=='y');
	
}
