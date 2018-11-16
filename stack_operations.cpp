#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

int top = -1;
int n;
int stack[MAX];

int pop();
int push();
int show();
int main()
{
	int choice;
	do
	{
		printf("choose an option:\n");
		printf("1 to push\n2 to pop\n3 to show\n4 to exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:printf("enter the element to insert in stack : ");
			scanf("%d",&n);
			push();
			break;
			case 2:pop();break;
			case 3:show();break;
			case 4:exit(0);break;
			default:printf("incorrect option\n");
		}
	}while(1);
return 0;
}
int push(int n)
{
	if(top == MAX-1)
	{
		printf("\nstack is full,overflow");
		exit(0);
	}
	else
	{
		top++;
		stack[top] = n;
	}
return 0;
}

int pop()
{
	if(top==-1)
	{
		printf("\nno element is present, underflow");
		exit(0);
	}
	else
	{
		n = stack[top];
		top--;
		printf("removed %d",n);
	}
return 0;
}

int show()
{
	int i;
	printf("elements of the stack are: ");
	for(i=0;i<=top;i++)
	{
		printf("%d", stack[i]);
	}
return 0;
}





