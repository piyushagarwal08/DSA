#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*start = NULL;

int create()
{
	struct node *new_node,*current;
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("\nenter the data for node: ");
	scanf("%d",&new_node->data);
	new_node->next= NULL;
		
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


int begin()
{
	if(start == NULL)
	{
		printf("underflow");
	}
	else
	{
		start = start->next;
	}
return 0;
}

int end()
{
	struct node *current,*temp;
	if (start == NULL)
	{
		printf("underflow");	
	}	
	else
	{
		current = start;
		while(current->next!=NULL)
		{
			temp = current;
			current = current->next;
			
		}
		temp->next = NULL;
	}
return 0;
}

int desired()
{
	int loc;
	int i=0;
	struct node *current,*temp;
	printf("enter the location to delete from: ");
	scanf("%d",&loc);
	if (start == NULL)
	{
		printf("underflow");
	}	
	
	else
	{	if(loc == 1)
		{
			start = start->next;
		
		}
		else
		{
			current = start;
			while(i!=loc-2)
			{
				current = current->next;
				i++;
			}
			temp = current->next;
			current->next=temp->next;
		
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
	}printf("NULL\n");
return 0;
}


int main()
{
	int ch;
	do
	{
		printf("choose an option to delete from:\n");
		printf("1 to beginning\n2 to end\n3 to desired\n4 to create\n5 to display\n6 to exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:begin();break;
			case 2:end();break;
			case 3:desired();break;
			case 4:create();break;
			case 5:display();break;
			case 6:exit(0);
			default:printf("enter proper input");break;
		}
	}while(1);
return 0;
}
