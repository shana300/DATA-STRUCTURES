#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("Enter the size of the array:");
scanf("%d",&n);
printf("stack operations");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
do
{
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: display();
		break;
		case 4: return 0;
		break;
		default:
		printf("wrong");
	}
}
while(choice!=4);
return 0;
}
void push()
{
	if(top>=n)
	printf("stack overflow");
	else
	{
		printf("enter element:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	printf("stack underflow");
	else
	{
		printf("popped element is %d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("Elements in the stack :");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
	}
	else
	{
		printf("stack empty");
		}
	}
