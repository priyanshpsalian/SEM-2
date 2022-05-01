#include<stdio.h>
void main()
{
int n,nc,rev;
for(n=10000;n<=99999;n++)
{
rev=0;
nc=n;
while(nc!=0)
{
rev=rev*10+ nc%10;
nc /=10;
}
if(rev==n*4)
printf("%d\n",n);
}
}
