package chap09;

class Inner
{
	private int x;
	public void setX(int x)
	{
		this.x=x;
	}
	
	public int getX()
	{
		return x;
	}
}

class Outer
{
	private Inner y;
	public void setY(Inner y)
	{
		this.y=y;
	}
	
	public Inner getY()
	{
		return y;
	}
}

public class P433_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Outer o=new Outer();
		Inner i=new Inner();
		int m=10;
		i.setX(10);
		o.setY(i);
		
		//n=100;
		//o.getY().setX(100); 정답
		//i.setX(100); 정답
		//i=new Inner(); i.setX(100);
		//o.setY(i); i=new Inner(); i.setX(100);
		//i=new Inner(); i.setX(100); o.setY(i); 정답
		System.out.println(o.getY().getX());
		
		
		
	}

}
