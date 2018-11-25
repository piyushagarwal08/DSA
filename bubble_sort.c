#include<stdio.h>
int main()
{
	int r,c,n,a[100],temp;
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	for(r=0;r<n;r++)
	{
		scanf("%d",&a[r]);	
	}

	printf("array before sorting is :\n");
	for (r=0;r<n;r++)
	{
		printf("%d",a[r]);
	}	

	
	for(r=0;r<=n-1;r++)
	{
		for(c=0;c<n-r-1;c++)
		{
			if(a[c]>a[c+1])
			{
				temp = a[c];
				a[c] = a[c+1];
				a[c+1] = temp;
			}

		}	
	}	
	printf("\n");
	printf("array after sorting is :\n");
	for (r=0;r<n;r++)
	{
		printf("%d",a[r]);
	}
return 0;
}
