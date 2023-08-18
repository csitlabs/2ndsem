#include<iostream>
using namespace std;
int main() {
	int a,b,c,d,e,n;
	cout<<"Enter marks of 5 subjects: ";
	cin>>a>>b>>c>>d>>e;
	n = (a + b + c + d + e) * 100 / 500;
 	if(n<=100 && n>=80){
		cout<<"Percent: " << n << "\nDivision: Distinction";
	}
	else if(n<80 && n>=70){
		cout<<"Percent: " << n << "\nDivision: First division";
	}
	else if(n<70 && n>=60){
		cout<<"Percent: " << n << "\nDivision: Second division";
	}
	else if(n<60 && n>=50){
		cout<<"Percent: " << n << "\nDivision: Third division";
} 
	else{
	
		cout<<"Percent: " << n << "\n Fail";
	}
return 0;
}
