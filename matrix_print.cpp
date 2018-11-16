#include <stdio.h>
#include<conio.h>
int main()
{
	int m,n,c,d, mat[10][10];
	printf("enter the number of rows and columns of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of matrix\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d", &mat[c][d]);
		}
	}
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			printf("%d",mat[c][d]);
			
		}printf("\n");
	}
return 0;		
}
