#include<stdio.h>

int StrLen(char *str)
{
	static int iCount = 0;

	if(*str != '\0')
	{
		iCount++;
		*str++;
		StrLen(str);
	}
	
	return iCount;
}

int main()
{
	int iRet = 0;
	char Arr[20];
	
	printf("Enter String : \n");
	scanf("%[^\n]s",Arr);
	
	iRet = StrLen(Arr);
	printf(" %d ",iRet);
	
	return 0;
}