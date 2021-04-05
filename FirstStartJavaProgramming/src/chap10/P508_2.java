package chap10;

class BBB
{
	public int a=10;
}

class CCC
{
	public int b=10;
}

public class P508_2 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		BBB a1=new BBB();
		BBB a2=new BBB();
		BBB a3=a1;
		BBB b1=new BBB();
		System.out.println(a1.equals(a2));
		System.out.println(a1.equals(a3));
		System.out.println(a1.equals(b1));
	}

}
