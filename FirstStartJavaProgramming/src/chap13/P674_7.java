package chap13;

public class P674_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try
		{
			method1();
			System.out.println("�޼ҵ�ȣ����");
		}
		catch(ArrayStoreException ex)
		{
			System.out.println("ArrayStoreException ���� �߻�");
		}
		catch(NullPointerException ex)
		{
			System.out.println("NullPointerException ���� �߻�");
		}
		
	}
	
	static void method1() throws RuntimeException 
	{
		try
		{
			int a=0;
			int b=2/a;
			System.out.println("��������");
		}
		catch(ArithmeticException ex)
		{
			System.out.println("ArithmeticException ���� �߻�");
			throw new ArithmeticException();
		}
	}

}
