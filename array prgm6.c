#include<stdio.h>
int main()
{
int a[10][10],s,i,j,r,c;
printf("Enter the order of the matrix:\n");
scanf("%d %d",&r,&c);
printf("Enter the values:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
s=0;
if(r==c)
{
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
if(i==j)
s=s+a[i][j];
}
printf("\n Sum of diagonal elements=%d",s);
}
else
printf("\n No diagonal elements");
return 0;
}
