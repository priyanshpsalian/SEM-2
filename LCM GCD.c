#include<stdio.h>
int lcm(int,int,int);
int main()
{
int a,b,r;
printf("enter Two no\n");
scanf("%d%d",&a,&b);
if(a>b)
{
r=a;
a=b;
b=r;
}
r=lcm(a,b,2);
printf("your L.C.M is=%d\nAND G.C.D is=%d",r,a*b/r);
return 0;
}
int lcm(int a,int b,int r)
{
int f1,f2,p;
if(a==1 && b==1)
return 1;
if(a%r==0)
{
a=a/r;
f1=0;
}
else
f1=1;
if(b%r==0)
{
b=b/r;
f2=0;
}
else
f2=1;
if(f1==1 && f2==1)
r=a%r+r;
if(f1==0 || f2==0)
p=r*lcm(a,b,r);
else
p=lcm(a,b,r);
return p;
}

