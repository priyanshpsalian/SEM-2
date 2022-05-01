#include<stdio.h>
int main()
{
int i,n,maxfreq,j,currfreq,ans;
printf("enter the number of values\n");
scanf("%d",&n);
int a[n];
printf("enter %d numbers\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
maxfreq=0;
ans=-1;
for(i=0;i<n;i++)
{
int currfreq=1;
for(j=i+1;j<n;j++)
if (a[j]==a[i])
currfreq=currfreq+1;
if(maxfreq<currfreq)
{
maxfreq=currfreq;
ans=a[i];
}
else if(maxfreq==currfreq)
{
if(ans<a[i])
{
ans=ans;
}
else
ans=a[i];
}
}
printf("number with maximum frequency is %d",ans);
return 0;
}
