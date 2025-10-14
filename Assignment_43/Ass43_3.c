#include<stdio.h>

int Small(char *str)
{	
	static int iCount = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCount++;
		}
		str++;
		Small(str);
	}
	
	return iCount;
}

int main()
{
	int iRet = 0;
	char Arr[20];
	
	printf("Enter String : \n");
	scanf("%[^\n]s",Arr);
	
	iRet = Small(Arr);
	printf(" %d ",iRet);
	
	return 0;
}