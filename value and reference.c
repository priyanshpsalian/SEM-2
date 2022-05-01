#include <stdio.h>
void swap(int* a, int* b);
int power(int a, int b);
int main()
{
int a= 200 , b = 100 , i , j ,c,d;
printf("The value of a and b before swapping is %d %d \n",a,b);
swap(&a,&b);
printf("The value of a and b after swapping is %d %d\n",a,b);
printf("Enter the integer to raise the power \n");
scanf("%d %d", &c, &d);
printf("The value of a^b is %d", power(c,d));
return 0;
}
void swap(int* a, int* b){
int temp = *a;
*a = *b;
*b = temp;
}
int power(int a, int b){
int k = 1;
while(b--){
k*=a;
}
return k;
}
