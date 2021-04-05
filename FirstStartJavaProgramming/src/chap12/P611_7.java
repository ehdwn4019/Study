package chap12;

public class P611_7 {

	public static void go(Long n)
	{
		System.out.print("Long ");
	}
	
	public static void go(Integer n)
	{
		System.out.print("Integer ");
	}
	
	public static void go(Short n)
	{
		System.out.print("Short ");
	}
	
	public static void go(int n)
	{
		System.out.print("int ");
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		short x=10;
		int y=20;
		long z=30;
		go(x);
		go(y);
		go(z);
		
	}

}
