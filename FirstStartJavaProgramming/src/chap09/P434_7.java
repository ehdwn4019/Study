package chap09;

class Foo
{
	private int x;
	public Foo(int x)
	{
		this.x=x;
	}
	
	public void setX(int x)
	{
		this.x=x;
	}
	
	public int getX()
	{
		return x;
	}
}

public class P434_7 {

	static Foo obfoo(Foo f)
	{
		f=new Foo(100);
		return f;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Foo f=new Foo(300);
		System.out.println(f.getX()+"-");
		Foo ff=obfoo(f);
		System.out.println(f.getX()+"-");
		System.out.println(ff.getX()+"-");
		f=obfoo(ff);
		System.out.println(f.getX()+"-");
		System.out.println(ff.getX()+"-");
		
	}

}
