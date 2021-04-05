package chap11;

interface Go
{
	public void go();
}

class Seoul implements Go
{
	public void go()
	{
		System.out.println("go in Seoul");
	}
}
class MaPoGu extends Seoul
{
	public void go()
	{
		System.out.println("go in MaPoGu");
	}
}

class GongDuk extends MaPoGu implements Go
{
	
}

public class P567_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		new Seoul().go();
		new MaPoGu().go();
		new GongDuk().go();
		
	}

}
