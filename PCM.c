#include <stdio.h>
struct student
{
char name[50];
int roll;
float p, c, m, marks;
}
s;
int main()
{
printf("Enter information:\n");
printf("Enter name: ");
fgets(s.name, sizeof(s.name), stdin);
printf("Enter roll number: ");
scanf("%d", &s.roll);
printf("Enter Physics marks: ");
scanf("%f", &s.p);
printf("Enter Chemistry marks: ");
scanf("%f",&s.c);
printf("Enter Maths marks");
scanf("%f",&s.m);
s.marks=s.p+s.c+s.m;
printf("Displaying Information:\n");
printf("Name: ");
printf("%s", s.name);
printf("Roll number: %d\n", s.roll);
printf("Marks: %.1f\n", s.marks);
return 0;
}
