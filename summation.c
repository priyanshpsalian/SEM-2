#include <stdio.h>
int calc(int n , int x[n], int y[n] , int z[n]);
int main()
{
int n ,i;
printf("Enter the array size \n");
scanf("%d", &n);
int x[n] , y[n] , z[n];
for(i=0 ; i<n;i++)
{
scanf("%d", &x[i]);
}
for(i=0 ; i<n;i++)
{
scanf("%d", &y[i]);
}
for(i=0 ; i<n;i++)
{
scanf("%d", &z[i]);
}
printf("The sum of the equation is %d",calc(n,x,y,z));
return 0;
}
int calc(int n , int x[n], int y[n] , int z[n])
{
int a =0, b =0, c =0, i;
for(i =0;i<n;i++){
a+=(x[i]*x[i]*y[i]);
b+=(x[i]*y[i]*y[i]);
c+=(x[i]*y[i]*z[i]);
}
return a+b+c;
}
