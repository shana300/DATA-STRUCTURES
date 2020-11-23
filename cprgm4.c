#include<stdio.h>
int main()
{
int first,second,temp;
printf("Enter the first number:");
scanf("%d",&first);
printf("Enter the second number:");
scanf("%d",&second);
temp=first;
first=second;
second=temp;
printf("after swapping,first number=%d\n",first);
printf("after swapping,second number=%d",second);
return 0;
}
