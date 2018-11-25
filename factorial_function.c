#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int result = 1;
	printf("enter the number you wish to get factorial for: ");
	scanf("%d",&n);
	while(n!=0)
	{
		result = result*n;
		n--;	
	}
		
	
	printf("the factorial is %d",result);
return 0;
}
