#include<stdio.h>
int main()
{
int a[100],n,i,zero=0,pos=0,neg=0;
printf("Enter no: of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==0)
zero++;
else if(a[i]<0)
neg++;
else
pos++;
}
printf("No:of zeroes=%d",zero);
printf("\n No:of positive numbers=%d",pos);
printf("\n No:of negative numbers=%d",neg);
return 0;
}
