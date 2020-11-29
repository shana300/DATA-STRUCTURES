#include<stdio.h>
int main()
{
int i;
float a[10],value,total;
printf("Enter 10 real numbers:\n");
for(i=0;i<10;i++)
{
scanf("%f",&value);
a[i]=value;
}
total=0;
for(i=0;i<10;i++)
total=total+a[i]*a[i];
printf("\n");
for(i=0;i<10;i++)
printf("a[%2d]=%5.2f\n",i+1,a[i]);
printf("\n total=%.2f\n",total);
return 0;
}
