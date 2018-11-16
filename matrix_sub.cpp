#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,p,q,mat_1[10][10],mat_2[10][10],sub[10][10];
	printf("enter the no. of rows and columns:\n");
	scanf("%d%d", &r,&c);
	
	printf("enter the elements of matrix 1:\n");

	for(p=0;p<r;p++)
	{
			for(q=0;q<c;q++)
		{
			printf("enter element a%d%d:", p+1, q+1);
			scanf("%d",&mat_1[p][q]);
		}
	}	
	
	printf("enter the elements of matrix 2:\n");

	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("enter element a%d%d:", p+1, q+1);
			scanf("%d",&mat_2[p][q]);
		}
	}	
	
	//subtraction
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			sub[p][q] = mat_1[p][q] - mat_2[p][q];
		}
	}
	
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d",mat_1[p][q]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d",mat_2[p][q]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d",sub[p][q]);
			printf(" ");
		}
		printf("\n");
	}
return 0;
}
