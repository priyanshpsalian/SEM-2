#include<stdio.h>
int main()
{
int i,j,m,n,a[10][10];
printf("enter row and column size\n");
scanf("%d%d",&m,&n);
printf("enter matrix elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
printf("matrix read is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}
