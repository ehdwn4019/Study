package chap11;

class Am
{
	void callme()
	{
		System.out.println("Ŭ���� Am�� callme() �޼ҵ� ����");
	}
}

class Bm extends Am
{
	void callme()
	{
		System.out.println("Ŭ���� Bm�� callme() �޼ҵ� ����");
	}
}

class Cm extends Am
{
	void callme()
	{
		System.out.println("Ŭ���� Cm�� callme() �޼ҵ� ����");
	}
}

public class PolymorphismTest1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Am r =new Am();
		r.callme();
		r=new Bm();
		r.callme();
		r=new Cm();
		r.callme();
		
	}

}
