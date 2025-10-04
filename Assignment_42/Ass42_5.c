#include<stdio.h>

int Mult(int iNo)
{
	int iDigit = 0;
	static int iMult = 1;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
		Mult(iNo);
	}
	return iMult;
}

int main()
{
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter Value : \n");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	printf(" %d ",iRet);
	
	return 0;
}