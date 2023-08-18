#include<iostream>
using namespace std;
int main()
{
   int a[10], even=0, odd=0, i;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>a[i];
   for(i=0; i<10; i++)
   {
      if(a[i]%2==0)
         even++;
      else
         odd++;
   }
   cout<<"Total Even Numbers = "<<even << endl;
   cout<<"Total Odd Numbers = "<<odd << endl;
   return 0;
}

