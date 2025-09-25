#include<stdio.h>

void Display(int no)
{
	if(no > 0)
	{
		printf(" %d ",no);
		Display(no - 1);
	}
}

int main()
{
	Display(5);
	
	return 0;
}