#include<stdio.h>
void main()
{
int i,sum,product;
sum=0;
i=5;
while(i*(i+1)<400)
{
sum=sum+i;
i=i+1;
}
printf("\nsum is %d\n",sum);
}


