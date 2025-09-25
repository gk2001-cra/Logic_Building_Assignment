#include<stdio.h>

void Display(int no)
{
	if(no > 0)
	{
		Display(no - 1);
		printf(" %d ",no);
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