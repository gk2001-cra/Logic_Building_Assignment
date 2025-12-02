import java.util.*;

class Ass_5
{
	public void Accept(int iNo)
	{
		int i = 0;
		
		for(i = 1; i <= iNo; i++)
		{
			System.out.print("*");
		}
	}
	
	public static void main(String A[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Value : ");
		iValue = sobj.nextInt();
		
		Ass_5 aobj = new Ass_5();
		
		aobj.Accept(iValue);
	
	}
}