package chap11;

abstract class Oop
{
	abstract void printmsg(); 
}

class SubOop extends Oop
{
	void printmsg()
	{
		System.out.println("자바! 공부합시다!");
	}
}

public class P556_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		new SubOop().printmsg();

	}

}
