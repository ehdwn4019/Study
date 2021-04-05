package chap10;

class A5
{
	private int i;
	protected char c;
	public int f;
	private void testA()
	{
		i=3;
		c='a';
		f=1;
	}
}

class B5 extends A5
{
	int j;
	void testB()
	{
		j=6;
		//i=9;
		c='k';
		f=89;
		//testA();
	}
}

public class P489_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
