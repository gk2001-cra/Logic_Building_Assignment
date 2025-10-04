#include<stdio.h>

int SummDigit(int iNo)
{
	int iDigit = 0;
	static int iSum = 0;
	
	if(iNo != 0)
	{
		
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		SummDigit(iNo);
	}
	
	return iSum;
}
int main()
{
	int iValue  = 0;
	int iRet = 0;
	
	printf("Enter Value : \n");
	scanf("%d",&iValue);
	
	iRet = SummDigit(iValue);
	printf(" %d ",iRet);
	
	return 0;
}