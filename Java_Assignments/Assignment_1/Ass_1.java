class Ass_1
{
	public int Divide(int iNo1,int iNo2)
	{
		int iAns = 0;
		
		if(iNo2 > iNo1)
		{
			return -1;
		}
		iAns = iNo1 / iNo2;
		
		return iAns;
	}
	
	public static void main(String A[])
	{
		int iValue1 = 15,iValue2 = 5;
		int iRet = 0;
		
		Ass_1 dobj = new Ass_1();
		
		iRet = dobj.Divide(iValue1,iValue2);
		
		System.out.println("Division is : "+iRet);
	}
}