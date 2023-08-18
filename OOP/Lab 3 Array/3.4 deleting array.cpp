#include <iostream>
#define true 1
using namespace std;
int main()
{
int a[10], p;
cout<< "\nEnter 10 elements of the array: ";
for (int i=0;i<10;i++){
    cin>>a[i];
}
while (true) {
cout << endl << "\nThe 10 elements of the array before deleting are : "<< endl;
    for(int i=0; i<10; i++)
    {
        cout << a[i] <<", " ; 
    }

cout << endl <<"Enter the position from 1 to 10 of the element you want to delete or Enter 00 to exit: " << endl;
cin>>p;
if (p == 00) {
	exit(0);
}
else if (p<=10 && p>0) {
cout << "The  9  elements of the array after deleting  are : " << endl;
  for(int i=0; i<10; i++)
  if(i==p-1){
      continue;
  }
  else
    {
        cout << a[i]<<", " ; 
    }
}
else {
	cout<<"Invalid Input!" << endl;
}
}
return 0;
}
