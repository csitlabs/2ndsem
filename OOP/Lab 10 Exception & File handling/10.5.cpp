//lab 10.5
#include<iostream>
using namespace std;
int main(){
	try{
		int n,a[100];
		cout<<"Size of Array: ";
		cin>>n;
		cout<<"Elements to be entered in the array: ";
		for(int i=0;i<100;i++){
			if(i<n){
				cin>>a[i];
				cout<< "Sucessfully Entered " <<a[i] << " in the array." << endl;
			}
			else{
				cin>>a[i];
				throw(a[i]);
			}
				
			}
	}
	catch(int num){
		cout<<"Error! Input from " << num << " couldn't be put into array! ";
	}
	return 0;
}

