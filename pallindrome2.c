#include<stdio.h>
void main()
{
int n=0,i;
char a[100],rev[100];
printf("Enter a string :\n");
gets(a);
while(a[n]!='\0')
{
n++;
}
for(i=0;i<=(n-1);i++)
{
rev[n-i-1]=a[i];
}
for(i=0;i<=n-1;i++)
{
if(a[i]!=rev[i])
break;
}
if(i==n)
printf("The string is palindrome \n");
else
printf("The string is not palindrome \n");
}
