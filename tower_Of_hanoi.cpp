#include<stdio.h>
//#include<conio.h>
void towers(int, char, char, char);
int main()
{
	int num;
	printf("enter the number of disks : ");
	scanf("%d", &num);
	printf("sequence of moves: ");
	towers(num, 'A','C','B');
	return 0;
}
void towers(int num, char from, char to, char aux)
{
	if(num ==1)
	{
		printf("\n move disc 1 from %c to %c",from, to);
		return;
	}
	towers(num-1, from, aux, to);
	printf("\n move disk %d from %c to %c", num, from, to);
	towers(num-1, aux, to, from);
}
