#include <stdio.h>
#define rmax 10
#define cmax 10

int main(){
int A[rmax][cmax], B[rmax][cmax], C[rmax][cmax];
int r1, c1, r2, c2, i, j, k;
printf("\n Enter the number of rows and columns of the first matrix: ");
scanf("%d%d", &r1, &c1);
printf("\n Enter the number of rows and columns of the second matrix: ");
scanf("%d%d", &r2, &c2);
if(c1!=r2)
printf("\n The dimensions of the matrices do not match.");
else {
printf("\n Enter the elements of the first matrix A, one row at a time:\n");
for(i=0;i<=r1-1;i++)
for(j=0;j<=c1-1;j++)
scanf("%d", &A[i][j]);
printf("\n Enter the elements of the second matrix B, one row at a time:\n");
for(i=0;i<=r2-1;i++)
for(j=0;j<=c2-1;j++)
scanf("%d", &B[i][j]);
printf("\n The Boolean Product of the matrices A and B is:\n");
for(i=0;i<=r1-1;i++){
for(j=0;j<=c2-1;j++){
C[i][j]=0;
for(k=0;k<=r2-1;k++)
C[i][j]= C[i][j] || (A[i][k] && B[k][j]);
printf("%d ", C[i][j]);
}
printf("\n");
}
}
}
