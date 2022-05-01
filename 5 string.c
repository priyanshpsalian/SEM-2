#include <stdio.h>
#include <string.h>
int main()
{
char str[20];
puts("enter a string");
gets(str);
printf("Length of string str1: %d\n", strlen(str));
char s1[20];
char s2[20];
puts("enter 1st string");
gets(s1);
puts("enter 2nd string");
gets(s2);
if (strcmp(s1, s2) ==0)
{
printf("string 1 and string 2 are equal\n");
}
else
{
printf("string 1 and 2 are different\n");
}
char st1[10];
char st2[10];
puts("enter first string");
gets(st1);
puts("enter second string");
gets(st2);
strcat(st1,st2);
printf("Output string after concatenation: %s\n", st1);
char s3[30];
char s4[30];
puts("enter second string");
gets(s4);
strcpy(s3,s4);
printf("String copied in first is: %s\n", s3);
char str1[20];
printf("Enter string: ");
gets(str1);
printf("String is: %s",str1);
printf("\nReverse String is: %s\n",strrev(str1));
char stru[20];
printf("enter string:");
gets(stru);
printf("String is: %s",stru);
printf("\nUpper String is: %s",strupr(stru));
return 0;
}
