#include<stdio.h>
#include<conio.h>
int main()
{
	int j=0;
	int search,i,n,a[50];
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}	
	printf("\nenter the number to search: ");
	scanf("%d",&search);
	
	while(j<n)
	{
		if(a[j]==search)
		{
			printf("\nfound");
			break;
		}
		j++;
		if(j==n-1 && a[j]!=search)
		{	
			printf("not found");	
		}
	}
return 0;
}
