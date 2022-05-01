#include<stdio.h>
void main()
{
int i,sum,product,n;
sum=0;
printf("enter the value from which i starts");
scanf("%d",&i);
printf("enter the maximum product of consecutive integers");
scanf("%d",&n);
while(i*(i+1)<n)
{
sum=sum+i;
i=i+1;
printf("sum is %d\n",sum);
printf("i is %d\n",i);
}
printf("\nsum is %d\n",sum);
}
