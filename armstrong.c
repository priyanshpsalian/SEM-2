#include<stdio.h>
int main()
{
int n,sum,nc,d;
for(n=100;n<=9999;n++)
{
sum=0;
nc=n;
while(nc!=0)
{
d=nc%10;
if(n>=1000)
sum+=d*d*d*d;
else
sum+=d*d*d;
nc/=10;
}
if(sum==n)
printf("%d\n",n);
}
}

