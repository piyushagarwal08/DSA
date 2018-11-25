#include<stdio.h>
#include<conio.h>
int main()
{
	int n,key,j,i,a[20],middle,first,last,search,found=0;
	printf("enter the size of array");
	scanf("%d",&n);
	
	printf("enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<n;j++)
	{	key = a[j];
		i = j -1;
		while(i>=0 && a[i]>key)
		{
			a[i+1] = a[i];
			i = i-1;
			a[i+1] = key;
		}
	}	
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]); printf(" ");
	}
	//binary search
	
	printf("\nenter the element to search for: ");
	scanf("%d",&search);
	first = 0;
	last = n-1;
	
	while(first<=last)
	{
		middle= (first + last)/2;
		if(a[middle]==search)
		{
			printf("found");
			found = 1;
			break;
		}
		else if(a[middle]>search)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}
	if(first > last && found == 0)
	{
		printf("not found");
	}
return 0;
}
