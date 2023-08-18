#include<stdio.h>
#include<math.h>
#define max 20
int main()
{
	int a[max],b[max],s[max],n;
	char q;
	do
	{
		int i,c,d;
		printf("\n Enter the length of bit string = ");
		scanf("%d",&n);
		printf("\nEnter the 1st bit string one at a time = ");
		for(i=n-1;i>=0;i--)
		{
			scanf("%d",&a[i]);
		}
		printf("\nEnter the 2nd bit string one at a time = ");
		for(i=n-1;i>=0;i--)
		{
			scanf("%d",&b[i]);
		}
		c=0;
		for(i=0;i<=n-1;i++)
		{
			d=floor((a[i]+b[i]+c)/2);
			s[i]=a[i]+b[i]+c-(2*d);
			c=d;
		}
		s[n]=c;
		printf("\n Sum of two bit string = ");
		for(i=n;i>=0;i--)
		{
			printf("%d",s[i]);
		}
		printf("\n Do you want to continue?(y/n) :");
		scanf(" %c",&q);
	}
	while(q=='y');
	return 0;
}
