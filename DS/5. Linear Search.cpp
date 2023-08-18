#include<iostream>
#define max 20
using namespace std;
int search(int a[],int i, int j, int x){
	if(a[i] == x){
		return i;
	}else if(i == j){
		return 0;
	}else{
		return search(a,i+1,j,x);
	}
}
int main(){
	int a[max], n, x, i=1, j, k, location;
	char q;
	cout<<endl<<"Enter the number of elememts in the list: ";
	cin>>n;
	j = n;
	cout<<endl<<"Enter the elements of the list: ";
	for(k=1;k<=n;k++){
		cin>>a[k];
	}
	do{
		cout<<endl<<"Enter the element to search in the list: ";
		cin>>x;
		location = search(a,i,j,x);
		cout<<endl<<"The location of the element "<<x<<" is at "<<location<<endl;
		cout<<"Do you want continue?(y/n): ";
		cin>>q;
	}while(q=='y');
}
