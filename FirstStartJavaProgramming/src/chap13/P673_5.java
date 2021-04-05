package chap13;

public class P673_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try
		{
			method1();
			System.out.print("메소드 호출후");
		}
		catch(Exception ex)
		{
			System.out.println("Exception 예외 발생");
		}
		
		//제일 상위클래스를 제일먼저 적어야 한다
//		catch(RuntimeException ex)
//		{
//			System.out.println("RuntimeException 예외 발생");
//		}
	}
	
	static void method1() {}

}
