#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*start;

int begin()
{
	struct node *new_node,*current;
	new_node= (struct node*)malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		printf("overflow");
	}
	printf("enter the data: ");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=NULL;
	
	if(start == NULL)
	{
		start = new_node;
		current = new_node;
	}
	else
	{
		new_node->next = start;
		start->prev = new_node;
		start = new_node;
	}
return 0;
}

int end()
{
	struct node *new_node,*current;
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	new_node->prev = NULL;
	
	if(start == NULL)
	{
		start = new_node;
		current = new_node;
	}
	else
	{
		current = start;
		while(current->next != NULL )
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
		current = new_node;	
		
	}
	
return 0;
}

int desired()
{
	int loc;
	int i = 0;
	struct node *new_node,*current,*temp;
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	new_node->prev = NULL;
	printf("enter the location: ");
	scanf("%d",&loc);
	
	if(start == NULL)
	{
		start = new_node;
		current = new_node;
	}
	else if(loc == 1)
	{
		start->prev=new_node;
		new_node->next = start;
		start = new_node;
	}
	else
	{
		current = start;
		while(i!=loc-2)
		{
			current = current->next;
			i++;
		}
		new_node->next = current->next;
		new_node->prev = current;
		current->next = new_node;
		
	}
return 0;
}
int display()
{
	struct node *current;
	printf("elements of the list:\n");
	current = start;
	printf("start");
	while(current!= NULL)
	{
		printf("<--%d-->",current->data);
		current = current->next;
	}
	printf("NULL\n");
return 0;
}

int main()
{
	int ch;
	do
	{
		printf("choose an option to insert at:\n");
		printf("1 to beginning\n2 to end\n3 to desired\n4 to display\n5 to exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:begin();break;
			case 2:end();break;
			case 3:desired();break;
			case 4:display();break;
			case 5:exit(0);break;
			default:printf("enter proper input\n");break;
		}
	}while(1);
return 0;
}
