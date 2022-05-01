#include<stdio.h>
int main()
{
int size,i,a[10],even=0,odd=0;
printf("\nenter the size of array");
scanf("%d",&size);
printf("\nenter the numbers");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
if(a[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("\ntotal even numbers=%d",even);
printf("\ntotal odd numbers=%d",odd);
return 0;
}

