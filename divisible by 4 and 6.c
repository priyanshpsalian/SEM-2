#include<stdio.h>
void main()
{
int i;
for(i=1;i<=100;i++)
{
if(i%4==0&&i%6==0)
printf("%d\n",i);
}
}
