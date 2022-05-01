#include<stdio.h>
int main()
{
int a=0,b=1,c,i,n;
printf("enter number");
scanf("%d",&n);
while(b<n)
{
c=a+b;
a=b;
b=c;
}
if(b==n)
{
printf("\n%d is a fibonacci number",n);
}
else
{
printf("%d is not a fibonacci number",n);
}
return 0;
}
