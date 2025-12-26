import java.util.*;

class Ass2_3
{
	public void Display(int iNo, int iFrequency)
	{
		int iCnt = 0;
		
		if(iFrequency < 0)
		{
			iFrequency = -iFrequency;
		}
		
		for(iCnt = 1; iCnt <= iFrequency; iCnt++)
		{
			System.out.print(" "+iNo);
		}
	}
	
	public static void main(String A[])
	{
		int iValue1 = 0;
		int iValue2 = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number : ");
		iValue1 = sobj.nextInt();
		
		System.out.println("Enter Frequency : ");
		iValue2 = sobj.nextInt();
		
		Ass2_3 aobj = new Ass2_3();
		
		aobj.Display(iValue1,iValue2);
	}
	
}