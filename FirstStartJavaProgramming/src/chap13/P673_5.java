package chap13;

public class P673_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try
		{
			method1();
			System.out.print("�޼ҵ� ȣ����");
		}
		catch(Exception ex)
		{
			System.out.println("Exception ���� �߻�");
		}
		
		//���� ����Ŭ������ ���ϸ��� ����� �Ѵ�
//		catch(RuntimeException ex)
//		{
//			System.out.println("RuntimeException ���� �߻�");
//		}
	}
	
	static void method1() {}

}
