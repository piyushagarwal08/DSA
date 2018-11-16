#include<stdio.h>
int main()
{
	int i,key,j,n,a[100];
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of array");
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
		printf("%d",a[i]);
	}
return 0;
}
