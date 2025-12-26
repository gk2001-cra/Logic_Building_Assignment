import java.util.*;

class Ass2_1
{
	public void Display(int iNo)
	{
		int iCnt = 0;
		
		while(iCnt < iNo
		{
			System.out.print(" * ");
			iCnt++;
		}
	}
	
	public static void main(String A[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter value : ");
		iValue = sobj.nextInt();
		
		Ass2_1 aobj = new Ass2_1();
		
		aobj.Display(iValue);
	}	
}