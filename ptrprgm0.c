#include<stdio.h>
int main()
{
int x,y;
int *ptr;
x=10;
ptr=&x;
y=*ptr;
printf("value of x is %d",x);
printf("%d is stored at address %u",x,&x);
printf("%d is stored at address %u",*&x,&x);
printf("%d is stored at address %u",*ptr,ptr);
printf("%d is stored at address %u",ptr,&ptr);
printf("%d is stored at address %u",y,&y);
return 0;
}


