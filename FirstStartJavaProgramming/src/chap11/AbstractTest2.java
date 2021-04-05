package chap11;

abstract class Figure
{
	abstract void draw();
}

class Triangle2 extends Figure
{
	public void draw()
	{
		System.out.println("다형성 : 삼각형을 그린다");
	}
}

class Rectangle2 extends Figure
{
	public void draw()
	{
		System.out.println("다형성 : 사각형을 그린다");
	}
}

class Oval2 extends Figure
{
	public void draw()
	{
		System.out.println("다형성 : 타원형을 그린다");
	}
}

class Polydraw
{
	public void pdraw(Figure f)
	{
		f.draw();
	}
	
	
//  다형성을 제공하지 않으면 이렇게 3개로 만들어줘야 한다	
	
//	public void pdraw(Triangle2 t)
//	{
//		t.draw();
//	}
//	
//	public void pdraw(Rectangle2 r)
//	{
//		r.draw();
//	}
//	
//	public void pdraw(Oval2 o)
//	{
//		o.draw();
//	}
}

public class AbstractTest2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Polydraw p=new Polydraw();
		Figure fg1=new Triangle2();
		Figure fg2=new Rectangle2();
		Figure fg3=new Oval2();
		p.pdraw(fg1);
		p.pdraw(fg2);
		p.pdraw(fg3);
		
	}

}
