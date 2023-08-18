#include <iostream>
using namespace std;
int main()
{
int n, rev=0, temp = 0 , rem = 0;
cout<<"Enter a number: ";
cin>>n;
temp=n;
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(rev==temp) {
cout<<temp<<" is a Palindrome number.";
}
else{
cout<<temp<<" is not a Palindrome number.";
}
return 0;
}
