package chap12;

public class StringTest1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char a[]= {'C','O','M','P','U','T','E','R'};
		String s1=new String(a);
		String s2=new String(a,3,2);
		String s3=new String("ó�� �����ϴ��ڹ�");
		String s4="���� �ʱ�ȭ ���ڿ�";
		System.out.println("���ڿ� s1 : "+s1);
		System.out.println("���ڿ� s1�� ���� : "+s1.length());
		System.out.println("���ڿ� s2 : "+s2);
		System.out.println("���ڿ� s3 : "+s3);
		System.out.println("���ڿ� s4 : "+s4);

	}

}
