//lab 9.3
#include<iostream>
using namespace std;
class reverse
{
	private:
		int n,i;
	public:
		reverse()
		{
			cout<<"Enter number to display reverse: ";
			cin>>n;
		}
		friend void show(reverse);
};
void show(reverse r)
{
	 cout<<"The reverse the entered number: ";
			for(r.i=r.n;r.i>0;r.i=r.i/10)
			{
				cout<<r.i%10;
			}
}
int main()
{
    reverse r;
    show(r);
    return 0;
}
