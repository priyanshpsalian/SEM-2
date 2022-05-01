#include<stdio.h>
int main()
{
int i,num;
float total=0.0,average;
printf("enter the value of N\n");
scanf("%d",&num);
int array[num];
printf("enter %d numbers\n",num);
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("input array elements\n");
for(i=0;i<num;i++)
{
printf("%+3d\n",array[i]);
}
for(i=0;i<num;i++)
{
total+=array[i];
}
average=total/num;
printf("\nsum=%.2f\n",total);
printf("\naverage=%.2f\n",average);
}
