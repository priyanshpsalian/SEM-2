#include<stdio.h>
int f(int);
int main()
{
int x=0,y=1,n,z;
printf("Enter no upto which you have to give sum\n");
scanf("%d",&n);
z=f(n);
printf("sum is %d",z+1);
}
int f(int n)
{
int sum;
if(n==1)
return 0;
sum=n+f((n-1));
return sum;
}
