#include<stdio.h>

void Display(int no)
{
	if(no > 0)
	{
		printf(" * ");
		Display(no - 1);
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