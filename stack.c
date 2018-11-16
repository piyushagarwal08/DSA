#include<stdio.h>
#include<stdlib.h>
#define max 10

int top = -1;
int n;
int stack[max];
int push();
int pop();
int show();

int main()
{
	int choice;
	do
	{
		printf("choose an option\n");
		printf("1 to push\n2 to pop\n3 to show\n4 to exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("enter element to push");scanf("%d",&n);push(n);break;
			case 2:pop();break;
			case 3:show();break;
			case 4:exit(0);break;
			default:printf("improper input");
		}
	}while(1);
return 0;
}

int push(int data)
{
	if(top == max-1)
	{
		printf("overflow");
	}
	else
	{
		top = top + 1;
		stack[top] = data;
	}
return 0;
}

int pop()
{	
	int temp;
	if(top == -1)
	{
		printf("underflow");
	}
	else
	{
		temp = stack[top];
		top = top - 1;
		printf("removed %d",temp);
	}
return 0;
}

int show()
{
	int i;
	printf("elements of stack are:\n");
	for(i=0;i<=top;i++)
	{
		printf("%d",stack[i]);
	}
return 0;
}

