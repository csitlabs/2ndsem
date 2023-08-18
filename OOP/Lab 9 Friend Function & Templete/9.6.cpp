// lab 9.6
#include<iostream>
using namespace std;

template<typename T>
T sum(T x,T y){
	return (x+y);
}

int main(){
	
	int a,b;
	float x,y;
	
	cout<<"Enter two Integer numbers: ";
	cin>>a>>b;
	
	cout<<"Enter two Float numbers: ";
	cin>>x>>y;
	
	cout<<"Sum of two integer number is: "<<sum<int>(a,b);
	cout<<"\nSum of two float number is: "<<sum<float>(x,y);
	
	return 0;
}
