#include <iostream>
using namespace std;
int main()
{
int a[10], largest = 0;
cout<<"Enter 10 elements in the array: ";
for (int i=0;i<10;i++){
    cin>>a[i];
}
for (int i=0;i<10;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}
cout<<"The largest number in the array is: " << largest;
return 0;
}
