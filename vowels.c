#include<stdio.h>
void main()
{
char s[30];
int i=0,m=0;
printf("Enter string-1\n");
gets(s);
while(s[i]!='\0')
{
if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E')
m++;
i++;
}
printf("no. of vowels in %s = %d",s,m);
}
