package chap10;

class A
{
	public int aa=1;
}

class B extends A
{
	private int bb=2;
	public int bb() {
		return bb;
	}
}

class C extends B
{
	int cc=3;
}

public class InheritanceTest1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		C objc=new C();
		System.out.println("objc��ü�� ��ü �Ӽ� ���� aa�� ���� "+objc.aa);
		System.out.println("objc��ü�� ��ü �Ӽ� ���� bb�� ���� "+objc.bb());
		System.out.println("objc��ü�� ��ü �Ӽ� ���� cc�� ���� "+objc.cc);
	}

}
