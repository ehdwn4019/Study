package chap13;

public class P674_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try
		{
			method1();
			System.out.println("메소드호출후");
		}
		catch(ArrayStoreException ex)
		{
			System.out.println("ArrayStoreException 예외 발생");
		}
		catch(NullPointerException ex)
		{
			System.out.println("NullPointerException 예외 발생");
		}
		
	}
	
	static void method1() throws RuntimeException 
	{
		try
		{
			int a=0;
			int b=2/a;
			System.out.println("나눗셈후");
		}
		catch(ArithmeticException ex)
		{
			System.out.println("ArithmeticException 예외 발생");
			throw new ArithmeticException();
		}
	}

}
