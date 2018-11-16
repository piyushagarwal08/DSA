#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,p,q,mat_1[10][10],mat_2[10][10],sum[10][10];
	printf("enter the number of rows and columns in matrix 1:\n");
	scanf("%d%d", &r,&c);
	
	printf("enter the elements of matrix 1:\n");
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			scanf("%d",&mat_1[p][q]);
		}
	}
	
	printf("enter the elements of matrix 2:\n");
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			scanf("%d",&mat_2[p][q]);
		}
	}	
	
	//sum of given matrices
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			sum[p][q] = mat_1[p][q] + mat_2[p][q];
		}
	}
	
	//print matrix 1
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d", mat_1[p][q]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	//print matrix 2
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d", mat_2[p][q]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	//print sum of both matrix
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d", sum[p][q]);
			printf(" ");
		}
		printf("\n");
	}
return 0;
}
