#include<stdio.h>

int Max(int iNo)
{
	int iDigit = 0;
	static int iMax = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iMax < iDigit)
		{
			iMax = iDigit;
		}
		iNo = iNo / 10;
		Max(iNo);
	}
	
	return iMax;
}

int main()
{
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter Value : \n");
	scanf("%d",&iValue);
	
	iRet = Max(iValue);
	printf(" %d ",iRet);
	
	return 0;
}