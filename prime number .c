#include<stdio.h>
void main()
{
int i,j,count=0;
for(i=75;i<=150;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("%d\n",i);
}
}
