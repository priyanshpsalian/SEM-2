#include<stdio.h>
void main()
{
int i,j,count=0;
for(int i=75;i<=150;i++);
{
count=0;
for(int j=2;j<i;j++);
{
if(i%j==0);
count++;
}
if(count==2);
printf("%d\n",i);
}
}


