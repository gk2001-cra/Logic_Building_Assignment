#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCount = 0;
	
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCount++;
		}
		str++;
		WhiteSpace(str);
	}
	
	return iCount;
}

int main()
{
	int iRet = 0;
	char Arr[20];
	
	printf("Enter String : \n");
	scanf("%[^\n]s",Arr);
	
	iRet = WhiteSpace(Arr);
	printf(" %d ",iRet);
	
	return 0;
}