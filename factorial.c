#include<stdio.h>
int main()
{
int i,fact=1,n;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of %d=%d",n,fact);
return 0;
}
