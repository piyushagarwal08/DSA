#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,p,q,mat_1[10][10],tran[10][10];
	printf("enter the number of rows and columns:\n");
	scanf("%d%d",&r,&c);
	
	printf("enter the elements of matrix 1:\n");

	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("enter element a%d%d:", p+1, q+1);
			scanf("%d",&mat_1[p][q]);
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
	//TRANSPOSE
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			tran[q][p] = mat_1[p][q];
		}
	}
	
	
	
	for(p=0;p<c;p++)
	{
		for(q=0;q<r;q++)
		{
			printf("%d",tran[p][q]);
			printf(" ");
		}
		printf("\n");
	}

return 0;
}
