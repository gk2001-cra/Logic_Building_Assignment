import java.util.*;

class Ass2_2
{
	public void Display(int iNo)
	{
		int iCnt = 0;
		
		while(iNo > iCnt)
		{
			System.out.println("*");
			iNo--;
		}
		
	}
	
	public static void main(String A[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter value : ");
		iValue = sobj.nextInt();
		
		Ass2_2 aobj = new Ass2_2();
		
		aobj.Display(iValue);
	}
}