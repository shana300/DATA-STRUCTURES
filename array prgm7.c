#include<stdio.h>
#define size 3
int main()
{
int a[size][size];
int r,c,sum=0;
printf("Enter the elements in the matrix of size %d*%d:\n",size,size);
for(r=0;r<size;r++)
for(c=0;c<size;c++)
scanf("%d",&a[r][c]);
for(r=0;r<size;r++)
{
sum=0;
for(c=0;c<size;c++)
sum+=a[r][c];
printf("sum of elements of row %d=%d\n",r+1,sum);
}
for(r=0;r<size;r++)
{
sum=0;
for(c=0;c<size;c++)
sum+=a[c][r];
printf("sum of elements of column %d=%d\n",r+1,sum);
}
return 0;
}
	
	
	
