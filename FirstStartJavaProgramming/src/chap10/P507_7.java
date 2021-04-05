package chap10;

class Simple
{
	public int value;
	public void calculate() {
		value+=7;
	}
}

public class P507_7 extends Simple{

	public void calculate() {
		value-=3;
	}
	public void calculate(int m)
	{
		calculate();
		super.calculate();
		value*=m;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		P507_7 so =new P507_7();
		so.calculate(2);
		System.out.println("Value is : "+so.value);
		
	}

}
