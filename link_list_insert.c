#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*start = NULL;

int begin()
{
	struct node *new_node,*current;
	if(new_node == NULL)
	{
		printf("overflow");
		exit(0);
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));
	}
	printf("enter the data:\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start == NULL)
	{
		start = new_node;
		current = new_node;
	}
	else
	{
		new_node->next=start;
		start = new_node;
	}	
return 0;
}

int end()
{
	struct node *new_node,*current;
	if(new_node == NULL)
	{
		printf("overflow");
		exit(0);
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));
	}
	printf("enter the data:\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start == NULL)
	{
		start = new_node;
		current = new_node;
	}
	else
	{
		current = start;
		while(current->next!=NULL)
		{
			current = current->next;
		}
		current->next = new_node;		
	}
	
return 0;
}

int desired()
{
	int loc;
	int i=0;
	struct node *new_node,*current,*temp;
	if(new_node == NULL)
	{
		printf("overflow");
		exit(0);
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));
	}
	printf("enter the data:\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	printf("enter the location to insert node\n");
	scanf("%d",&loc);
	if(start == NULL)
	{
		start = new_node;
		current = new_node;
	}	
	
	else
	{	if(loc == 1)
		{
			new_node->next=start;
			start = new_node;
		
		}
		else
		{
			current = start;
			while(i!=loc-2)
			{
				current = current->next;
				if(current->next == NULL)
				{
					current->next = new_node;
					printf("the end");
					display();
					exit(0);
				}
				i++;
			}
			temp = current->next;

			current->next = new_node;
			new_node->next=temp;		
		}

	}
return 0;
}

int display()
{
	struct node *new_node;
	printf("elements of the list are:\n");
	new_node = start;
	while(new_node!=NULL)
	{
		printf("%d-->",new_node->data);
		new_node = new_node->next;
	}printf("NULL");
return 0;
}

int main()
{
	int a;
	do
	{
		printf("choose an option to insert at:\n");
		printf("1 to beginning\n2 to end\n3 to desired\n4 to display\n5 to exit");
		scanf("%d",&a);
		
		switch(a)
		{
			case 1:begin();break;
			case 2:end();break;
			case 3:desired();break;
			case 4:display();break;
			case 5:exit(0);break;
			default:printf("enter proper input");break;
		}
	}while(1);
return 0;
}
