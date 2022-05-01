#include<stdio.h>
void main()
{
int i,j,m,n,lower_sum,upper_sum;
int a[10][10],b[10][10];
lower_sum=0;
upper_sum=0;
printf("enter the number of rows and columns of your matrix : ");
scanf("%d%d",&m,&n);
printf("\nenter the elements of your m x n matrix : ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i<=j)
{
upper_sum=upper_sum+a[i][j];
}
}
}
printf("\n Sum of upper triangular elements of a square matrix = %d\n",upper_sum);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(j<=i)
{
lower_sum=lower_sum+a[i][j];
}
}
}
printf("\n Sum of lower triangular elements of a square matrix = %d",lower_sum);
}
