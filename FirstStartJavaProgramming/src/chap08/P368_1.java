package chap08;

class Static
{
	public int a=20;
	private int b=5;
	static int c;
}

public class P368_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a=10;
		Static.c=a;
		Static st=new Static();
		System.out.println("Ŭ���� ���� : "+(Static.c));
		System.out.println("Ŭ���� ���� : "+st.c);
		System.out.println("���� a : "+a);
		System.out.println("���� a : "+st.a);
		}

}
