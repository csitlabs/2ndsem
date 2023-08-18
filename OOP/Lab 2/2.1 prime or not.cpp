#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter a number: ";
	cin>>n;
	if (n == 0 || n == 1) {
		cout<< n << " is neither Prime nor Composite.";
	}
	for(i=2;i<n;i++){
		if(n%i==0){
		cout<< n << " is not a prime number.";
		break;	
		}
	}
	if(n==i){
			cout<< n << " is a Prime number.";
	}
	return 0;
}
