#include<stdio.h>
int main()
{
int a[5][5]={8,3,3,9,10,3,5,17,1,2,8,6,2,3,1,15,7,3,2,9,6,14,2,6,0};
inti,j,sum=0;
printf("Row total:");
for(i=0;i<5;i++)
for(j=0;j<5;j++)
s=s+a[i][j];
printf("%d",s);
s=0;
printf("column total:");
for(j=0;j<5;j++)
for(i=0;i<5;i++)
s=s+a[i][j];
printf("%d",s);
sum=0;
return 0;
}
