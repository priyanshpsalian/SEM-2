#include<stdio.h>
int main()
{
int a[100],n,i,j,t;
printf("array size");
scanf("%d",&n);
printf("\nelements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[j]>a[i])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nascending");
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[j]<a[i])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\ndescending");
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
