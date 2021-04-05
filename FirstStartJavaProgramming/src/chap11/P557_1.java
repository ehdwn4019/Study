package chap11;

abstract class Car
{
	public int speed()
	{
		return 0;
	}
}

class Sedan extends Car
{
	public int speed()
	{
		return 100;
	}
}

class RaceCar extends Sedan
{
	public int speed()
	{
		return 250;
	}
}

public class P557_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		RaceCar rc=new RaceCar();
		Sedan s=new RaceCar();
		Car c=new RaceCar();
		System.out.println(rc.speed());
		System.out.println(s.speed());
		System.out.println(c.speed());
		
	}

}
