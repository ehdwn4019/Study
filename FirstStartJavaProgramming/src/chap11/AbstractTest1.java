package chap11;

abstract class Shape
{
	abstract void draw();
	abstract void computeArea(double a,double b);
}

class Circle1 extends Shape
{
	void draw()
	{
		System.out.println("���� �׸��� ���");
	}
	void computeArea(double r1,double r2)
	{
		System.out.println("���� ���� : "+(3.14*r1*r2));
	}
}

class Rectangle1 extends Shape
{
	void draw()
	{
		System.out.println("�簢���� �׸��� ���");
	}
	void computeArea(double h,double v)
	{
		System.out.println("�簢���� ���� : "+(h*v));
	}
}

class Triangle1 extends Shape
{
	void draw()
	{
		System.out.println("�ﰢ���� �׸��� ���");
	}
	
	void computeArea(double a,double h)
	{
		System.out.println("�ﰢ���� ���� : "+(a*h)/2);
	}
}

public class AbstractTest1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.println("==�߻� �޼ҵ带 �̿��� ������==");
		Shape s=new Circle1();
		s.draw();
		s.computeArea(5.0, 5.0);
		s=new Rectangle1();
		s.draw();
		s.computeArea(5.0, 10.0);
		s=new Triangle1();
		s.draw();
		s.computeArea(5.0, 10.0);
		
	}

}
