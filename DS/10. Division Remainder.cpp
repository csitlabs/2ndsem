#include<stdio.h>
#include <math.h>

int main() {
int a, d;
char p;
do{
printf("\n Enter a divided: ");
scanf("%d", &a);
printf("\n Enter a positive divisor: ");
scanf("%d", &d);
int q=0;
int r=abs(a);
while (r>=d){
r=r-d;
q=q+1;
}
if(a<0){
	if(r>0){
	r = d-r;
	q = -(q+1);	
	}
else if(r==0)
q=-q;
}
printf("\n The Quotient and remainder are %d and %d respectively.", q, r);
printf("\n Do you want to continue?(y/n): ");
scanf(" %c", &p);
}
while(p=='y');
return 0;
}
