#include<stdio.h>

void Display(int no)
{
	char ch = 'A';
	
	if(no > 0)
	{	
		Display(no - 1);
		printf(" %c ",ch + no - 1);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Value : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}