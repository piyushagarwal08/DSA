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
	char ch;
	do
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
			current->next= new_node;
			current = new_node;
		}
		
		printf("\nwant to add more nodes:");
		ch = getche();
	}while(ch!='n');
return 0;
}

int display()
{
	struct node *current;
	printf("elements of the list:\n");
	current = start;
	while(current!= NULL)
	{
		printf("%d-->",current->data);
		current = current->next;
	}
	printf("NULL");
return 0;
}

int main()
{
	create();
	display();
return 0;
}


