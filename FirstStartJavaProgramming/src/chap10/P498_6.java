package chap10;

class Comp
{
	public void go()
	{
		System.out.println("Comp go");
	}
}

class SuperComp extends Comp
{
	public void go()
	{
		System.out.println("SuperComp go");
	}
}

class Over
{
	public Comp c=new Comp();
	public SuperComp s=new SuperComp();
	public void go()
	{
		System.out.println("Over go");
	}
}

public class P498_6 extends Over{

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		P498_6 so=new P498_6();
		so.s.go();
		so.c.go();
		so.go();
		Over o=new P498_6();
		o.s.go();
		o.c.go();
		o.go();
		
		
	}

}
