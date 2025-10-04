#include<stdio.h>

int Fact(int iNo)
{
	static int iMult = 1;
	
	if(iNo > 0)
	{
		iMult = iMult * iNo;
		iNo--;
		Fact(iNo);
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Value : \n");
	scanf("%d",&iValue);
	
	iRet = Fact(iValue);
	printf(" %d ",iRet);
	
	return 0;
}