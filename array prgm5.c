#include<stdio.h>
int main()
{
int a[10][10],transpose[10][10],r,c,i,j;
printf("Enter rows and columns of the matrix:");
scanf("%d %d",&r,&c);
printf("\n Enter elements of the matrix:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);	
}
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
	transpose[j][i]=a[i][j];
}
printf("\n Transpose of matrix:\n");
for(i=0;i<c;i++)
for(j=0;j<r;j++)
printf("%d",transpose[i][j]);
printf("\t");
printf("\n");
return 0;
}
