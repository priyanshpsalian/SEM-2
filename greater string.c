#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
char str1[MAX_SIZE], str2[MAX_SIZE];
int res;
printf("Enter first string: ");
gets(str1);
printf("Enter second string: ");
gets(str2);
res = strcmp(str1, str2);
if(res == 0)
{
printf("Both strings are equal.");
}
else if(res == -1)
{
printf("Second string is greater than first.");
}
else
{
printf("First string is greater than second.");
}
return 0;
}
