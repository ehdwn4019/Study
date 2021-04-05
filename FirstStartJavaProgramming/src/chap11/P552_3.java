package chap11;

class Super
{
	public static final String SS="super";
	public static String sout()
	{
		return "SuperStatic";
	}
	
	public String nout()
	{
		return "SuperNormal";
	}
}

public class P552_3 extends Super{

	public static final String SS="sub";
	public static String sout()
	{
		return "SubStatic";
	}
	public String nout()
	{
		return "SubNormal";
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Super s= new P552_3();
		P552_3 ct =new P552_3();
		System.out.println(s.SS);
		System.out.println(s.sout());
		System.out.println(s.nout());
		
		System.out.println(((P552_3)s).SS);
		System.out.println(((P552_3)s).sout());
		System.out.println(((P552_3)s).nout());

	}

}
