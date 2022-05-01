#include<stdio.h>
void main()
{
int a[10][10],size,i,j,t;
printf("enter size of matrix");
scanf("%d",&size);
printf("\nenter the values:");
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\ngiven square matrix is");
for(i=0;i<size;i++)
{
printf("\n");
for(j=0;j<size;j++)
{
printf("%d\t",a[i][j]);
}
}
for(i=1;i<size;i++)
{
for(j=0;j<i;j++)
{
t=a[i][j];
a[i][j]=a[j][i];
a[j][i]=t;
}
}
printf("\ntranspose matrix is:");
for(i=0;i<size;i++)
{
printf("\n");
for(j=0;j<size;j++)
{
printf("%d\t",a[i][j]);
}
}
}
