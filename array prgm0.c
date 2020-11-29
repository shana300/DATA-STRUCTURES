#include<stdio.h>
int main()
{
int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k;
printf("enter rows and columns for first matrix:");
scanf("%d %d",&r1,&c1);
printf("enter rows and columns for second matrix:");
scanf("%d %d",&r2,&c2);
if(c1==r2)
{
printf("\n enter elements of matrix1:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter elements of matrix2:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]); 
}
}
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
{
result[i][j]=0;
for(k=0;k<r1;k++)
{
result[i][j]+=a[i][k]*b[k][j];
}
}
printf("\n output matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d",result[i][j]);
printf("\t");
}
printf("\n");
}
}
else
printf("\n multiuplication is not possible");
return 0;
}
