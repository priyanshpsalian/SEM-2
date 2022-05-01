#include<stdio.h>
int low(char*);
int camp(char*,char*);
void main()
{
char s1[30],s2[30];
char p1[30],p2[30];
int r,i=0,j=0;
printf("Enter string-1\n");
gets(s1);
printf("Enter string-2\n");
gets(s2);
while(s1[i]!='\0')
{
p1[i]=s1[i];
i++;
}
p1[i]='\0';
i=0;
while(s2[i]!='\0')
{
p2[i]=s2[i];
i++;
}
p2[i]='\0';
low(&s1);
low(&s2);
r=camp(&s1,&s2);
if(r==0)
printf(" string-1&2 same- %s",p1);
else
{
if(r>0)
printf(" string-1 is greater =%s",p1);
else
printf(" string-2 is greater =%s",p2);
}
}
int low(char *s)
{
int i=0;
while(s[i]!='\0')
{
if(s[i]>='A' && s[i]<='Z')
s[i]=s[i]+'a'-'A';
i++;
}
s[i]='\0';
return 0;
}
int camp(char *s1,char *s2)
{
int i=0,t=0;
while(s1[i]!='\0')
{
if(s1[i]!=s2[i])
{
t=s1[i]-s2[i];
break;
}
i++;
}
return t;
}

