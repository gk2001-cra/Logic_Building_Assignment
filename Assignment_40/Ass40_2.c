#include<stdio.h>

void Display(int no)
{
	if(no > 1)
	{
		Display(no -1);
	}
	printf(" %d ",no);
}

int main()
{

	Display(5);
	
	return 0;
}