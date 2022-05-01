#include<stdio.h>
void main()
{
int i,j,rows,spaces;
scanf("%d",&rows);
spaces=rows-1;
for(i=1;i<=rows;i++)
{
for(j=1;j<=spaces;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
spaces--;
}
for(i=rows-1;i>=1;i--)
{
for(j=1;j<=spaces;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
spaces++;
}
}
