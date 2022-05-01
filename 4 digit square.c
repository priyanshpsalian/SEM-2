#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int num,fn,ln,iv,iv1;
float fv,fv1;
printf("enter a number");
scanf("%d",&num);
fn=num/100;
ln=num%100;
printf("%d %d",fn,ln);
fv=sqrt(fn);
iv=fv;
if(iv==fv)
{
printf("\n%d is a perfect square",fn);
}
else
{
printf("\n%d is not a perfect square",fn);
}
fv1=sqrt(ln);
iv1=fv1;
if(iv1==fv1)
{
printf("\n%d is a perfect square",ln);
}
else
{
printf("\n%d is not a perfect square",ln);
}
return 0;
}
