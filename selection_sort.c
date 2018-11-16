#include<stdio.h>
int main()
{
	int n,i,j,a[100],min,temp,loc;
	
	printf("enter the size of array:\n");
	scanf("%d",&n);
	
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("array to be sorted is : ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		min = a[i];
		loc = i;
		for(j=i+1;j<=n-1;j++)
		{
			if(min>a[j])
			{
				min = a[j];
				loc = j;
			}
			
		}
		temp = a[i];
		a[i] = a[loc];
		a[loc] = temp;
	}
	
	printf("sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
return 0;
}
