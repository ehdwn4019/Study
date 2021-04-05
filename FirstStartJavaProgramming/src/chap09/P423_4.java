package chap09;

public class P423_4 {

	int squares=81;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		new P423_4().go();
		
		
	}
	
	void go()
	{
		incr(++squares);
		System.out.println(squares);
	}
	
	void incr(int squares)
	{
		squares+=10;
	}

}
