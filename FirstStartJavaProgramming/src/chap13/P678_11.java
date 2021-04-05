package chap13;

public class P678_11 {

	static void test()
	{
		try {
			String x=null;
			System.out.print(x.toString()+ " ");
		} 
		finally {
			System.out.print("finally ");
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try
		{
			test();
		}
		catch(Exception ex)
		{
			System.out.print("exception ");
		}

	}

}
