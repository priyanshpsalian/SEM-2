#include<stdio.h>
#include<math.h>
int main()
{
int n,ivar,flag=0;
float fvar;
printf("enter a number");
scanf("%d",&n);
if(n%2==0)
{
printf("even\n");
}
else if(n%2!=0)
{
printf("odd\n");
}
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
{printf("not prime\n");
flag=1;
break;
}
}
if(flag==0)
{
printf("prime number");
}
fvar=sqrt(n);
ivar=fvar;
if(ivar==fvar)
{
printf("%d is perfect square\n",n);
}
else
{
printf("%d is not perfect square\n");
}
return 0;
}
