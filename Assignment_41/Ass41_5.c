#include<stdio.h>

void Display(int no)
{
	char ch = 'a';
	if(no > 0)
	{
		Display(no - 1);
		printf(" %c ",ch + no - 1);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter value : \n");
	scanf("%d",&iValue);
	
	Display(iValue);

	return 0;
}