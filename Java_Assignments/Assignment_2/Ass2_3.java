import java.util.*;

class Ass2_3
{
	public void Display(int iNo)
	{
		if(iNo < 10)
		{
			System.out.println("Hello");
		}
		else
		{
			System.out.println("Demo");
		}
	}
	
	public static void main(String A[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter value : ");
		iValue = sobj.nextInt();
		
		Ass2_3 aobj = new Ass2_3();
		
		aobj.Display(iValue);
	}
	
}