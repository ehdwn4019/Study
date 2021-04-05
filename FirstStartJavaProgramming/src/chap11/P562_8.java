package chap11;

interface Stuff
{
	public static final int EASY=3;
	void sdo(int t);
}
public class P562_8 implements Stuff{

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int x=5;
		new P562_8().sdo(++x);
	
	}
	
	
	public void sdo(int s)
	{
		s+=EASY+ ++s;
		System.out.println("s "+s);
		s=s+EASY+ ++s;
		System.out.println("s "+s);
		s=EASY+ ++s +s;
		System.out.println("s "+s);
		s=EASY+ s++ +s;
		System.out.println("s "+s);
	}
	
	

}
