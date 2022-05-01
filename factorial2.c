#include<stdio.h>
int fact(int);
void main()
{
int x,y;
printf("Enter no for factorial\n");
scanf("%d",&x);
y=fact(x);
printf("%d!=%d",x,y);
}
int fact(int n)
{
int p;
if(n==1)
return 1;
p=n*fact(n-1);
return p;
}
