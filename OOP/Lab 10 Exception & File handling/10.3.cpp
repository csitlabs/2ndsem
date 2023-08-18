#include<iostream>
using namespace std;
int main(){
	try{
		 
		float sales,comper,com;
		cout<<"Enter Total Sales: ";
		cin>>sales;
		cout<<"Enter Commission Percentage: ";
		cin>>comper;
		com=(comper/100)*sales;
		if(com>0){
			cout<<"Total Commission: "<<com;
		}
		else{
			throw(com);
		}	
	}
	catch(float com){
		cout<<"The commission " << com << " is Negative! ";
	}
	return 0;
}
