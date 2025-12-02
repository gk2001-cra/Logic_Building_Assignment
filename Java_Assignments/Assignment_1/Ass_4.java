import java.util.*;

class Ass_4
{
	public boolean Check(int iNo)
	{
		if(iNo % 5 == 0)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
	public static void main(String A[])
	{
		int iValue = 0;
		boolean bRet = false;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Value : ");
		iValue = sobj.nextInt();
		
		Ass_4 aobj = new Ass_4();
		
		bRet = aobj.Check(iValue);
		
		if(bRet == true)
		{
			System.out.println("Number is divisible by 5");
		}
		else
		{
			System.out.println("Number is not divisible by 5");
		}
	}
}