package chap07.P319_4;

public class Odd {

	public int sumOdd(int num)
	{
		int result=0;
		for(int i=1; i<=num; i++)
		{
			if(i%2!=0) result+=i;
		}
		
		return result;
	}
	
}
