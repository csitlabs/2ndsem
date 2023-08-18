#include<iostream>
using namespace std;
double power(float a, int n){
	if(n==0){
		return 1;
	}else{
		return a*power(a,n-1);
	}
}
int main(){
	float a;
	int n;
	double pow;
	char q;
	do{
		cout<<endl<<"Enter a nonzero real number: ";
		cin>>a;
		cout<<endl<<"Enter a nonzero integer: ";
		cin>>n;
		pow = power(a,n);
		cout<<"The value of "<<a<<" raised to the power "<<n<<" is "<<pow;
		cout<<endl<<"Do you want to continue?(y/n): ";
		cin>>q;
	}while(q == 'y');
}
