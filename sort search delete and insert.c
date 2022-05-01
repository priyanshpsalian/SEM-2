#include <stdio.h>
void modify_array(int arr[100], int n);
int main()
{
int n , arr[100] , i;
printf("Enter no of elements in array \n");
scanf("%d", &n);
printf("Enter elements in array \n");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
modify_array(arr,n);
return 0;
}
void modify_array(int arr[100], int n)
{
int i , j ,t =0 , d , g , s , in;
while (t ==0)
{
printf("Enter 1 to sort array \n2 to search element \n3 to delete element \n4 to insert element\nEnter any other number to exit \n");
scanf("%d", &g);
if(g>4)
{
break;
}
switch (g)
{
case 1:
for(int i=0;i<n;i++)
{
for(j = 0;j<n-i-1;j++)
{
if(arr[j+1]>arr[j])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
break;
case 2:
printf("Enter the number to search in array\n");
scanf("%d", &s);
int flag = 0;
for(i=0;i<n;i++)
{
if(s==arr[i])
{
flag= 1;;
}
}
if(flag==1)
{
printf("Element is found at index %d\n", i);
}
else
{
printf("Element is not found\n");
}
break;
case 3:
printf("Enter the index of array from which element should be deleted \n");
scanf("%d", &d);
if(d<n)
{
for(i=d;i<n;i++)
{
arr[i] = arr[i+1];
}
}
n--;
break;
case 4:
printf("Enter the element to be inserted in array\n");
scanf("%d", &in);
arr[n] = in;
n++;
break;
default:
t = 1;
break;
}
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
