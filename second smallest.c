#include<stdio.h>
#include<string.h>
void main()
{
int smallest,secondsmallest,a[100],size,i;
printf("\nenter number of elements");
scanf("%d",&size);
printf("\nenter %d elements",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
if(a[0]<a[1])
{
smallest=a[0];
secondsmallest=a[1];
}
else
{
smallest=a[1];
secondsmallest=a[0];
}
for(i=2;i<size;i++)
{
if(a[i]<smallest)
{
secondsmallest=smallest;
smallest=a[i];
}
else if(a[i]<secondsmallest)
{
secondsmallest=a[i];
}
}
printf("\nsecond smallest number is %d",secondsmallest);
printf("\nsmallest number is %d",smallest);
}
