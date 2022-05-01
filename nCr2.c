#include<stdio.h>
int fact(int);
void main()
{
int x,y,n,r,z,ans;
printf("for nCr Enter value of n and r \n");
scanf("%d%d",&n,&r);
x=fact(n);
y=fact(r);
z=fact(n-r);
ans=x/(y*z);
printf("%dC%d=%d",n,r,ans);
}
int fact(int n)
{
int p;
if(n==1)
return 1;
p=n*fact(n-1);
return p;
}
