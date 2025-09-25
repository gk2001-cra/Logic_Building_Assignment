#include<stdio.h>

void Display(char ch)
{
	if(ch == 'G')
	{
		return;
	}

	printf(" %c ",ch);
	Display(ch + 1);
}

int main()
{	
	Display('A');
	
	return 0;
}