#include<stdio.h>

int Min(int iNo)
{
	int iDigit = 0;
	static int iMin = 9;	// Set to largest digit
	
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iMin > iDigit)
		{
			iMin = iDigit;
		}
		iNo = iNo / 10;
		Min(iNo);
	}
	
	return iMin;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Value : \n");
	scanf("%d",&iValue);
	
	iRet = Min(iValue);
	printf(" %d ",iRet);

	return 0;
}