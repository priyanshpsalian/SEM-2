#include<stdio.h>
int main()
{
int i,k;
char c;
for(i=4;i>=1;i--)
{
c='A';
for(k=1;k<=i;++k)
{
printf("%c",c);
c++;
}
printf("\n");
}
return 0;
}
