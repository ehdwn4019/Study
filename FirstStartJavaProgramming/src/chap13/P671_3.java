package chap13;

public class P671_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a=0;
		int b=2;
		try
		{
			System.out.print("2/0 �� : ");
			int div=b/a;
			System.out.println(div);
		}
		catch(RuntimeException ex)
		{
			System.out.println("RuntimeException ���� �߻�");
		}
		catch(Exception ex)
		{
			System.out.println("Exception ���� �߻�");
		}
		
		
	}

}
