#include<stdio.h>
#include<string.h>
union info
{
char id[10],name[10];
};
int main()
{
union info i;
char input[10];
int pick;
printf("Pick the form of input :\n1)Name\n2)ID number\n");
scanf("%d",&pick);
switch(pick)
{
case 1:
printf("Enter your name:");
scanf("%s",&input);
strcpy(i.name,input);
printf("Information provided :%s",i.name);
break;
case 2:
printf("Enter your ID number:");
scanf("%s",&input);
strcpy(i.id,input);
printf("info. provided:%s",i.id);
break;
default:
printf("Invalid Input.");
break;
}
return 0;
}
