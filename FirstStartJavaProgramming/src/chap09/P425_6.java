package chap09;

class A
{
	//private int counter=0;
	private static int counter=0;
	public static int getCount() {return counter;}
	public A() {counter++;}
}

public class P425_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		A a1=new A();
		A a2=new A();
		A a3=new A();
		
		System.out.println(A.getCount());
		
	}

}
