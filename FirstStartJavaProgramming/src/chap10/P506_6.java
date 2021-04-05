package chap10;

class ClassA
{
	public int number;
	protected ClassA(int number)
	{
		this.number=number;
	}
}

public class P506_6 extends ClassA{

	private P506_6(int number)
	{
		super(number);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		P506_6 internal=new P506_6(515);
		System.out.print(internal.number);
	}

}
