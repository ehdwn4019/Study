package chap11;

abstract class Oop
{
	abstract void printmsg(); 
}

class SubOop extends Oop
{
	void printmsg()
	{
		System.out.println("�ڹ�! �����սô�!");
	}
}

public class P556_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		new SubOop().printmsg();

	}

}
