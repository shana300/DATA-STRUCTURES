#include<stdio.h>
int main()
{
int a[10],n,i;
printf("Enter no:of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Entered elements are:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
