package chap09;

public class P424_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int x=5;
		P424_5 p=new P424_5();
		p.doStuff(x);
		System.out.print(" main x="+x);

	}
	
	void doStuff(int x)
	{
		System.out.print(" doStuff x="+ ++x);
	}

}
