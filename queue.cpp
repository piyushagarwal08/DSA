#include<stdio.h>

#include<stdlib.h>
#define MAX 10
int front=-1;
int rear = -1;
int Q[MAX];
int data,num;
int insert();
int Delete();
int display();
int main()
{
	int ch;
	while(1)
	{
		printf("1 to insert\n2 to delete\n3 to display\n4 to exit\n");
		printf("\nenter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:insert();break;
			case 2:Delete();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("improper input");
		}
	}
return 0;
}

int insert()
{
	if(rear == MAX - 1)
	{
		printf("overflow");
	}
	printf("enter data: ");
	scanf("%d",&data);
	if(front ==-1 && rear == -1)
	{
		front++;
		rear++;
		Q[front] = data;
	}
	else
	{
		rear++;
		Q[rear] = data;
	}
return 0;
}

int Delete()
{
	if(front == -1 && rear == -1)
	{
		printf("underflow");
	}
	else
	{
		num = Q[front];
		front++;
		printf("deleted %d",num);
		printf("\n");
	}
return 0;
}

int display()
{
	int i;
	
	for(i=front;i<=rear;i++)
	{
		printf("%d",Q[i]);
	}printf("\n");
return 0;
}
