package chap08;

import java.util.Scanner;;

class SimpleSircle
{
	static final double PI=3.14159;
	
}

public class P369_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc=new Scanner(System.in);
		
		int radius;
		
		
		System.out.print("원의 반지름을 입력하세요 : ");
		radius=sc.nextInt();
		System.out.println("원의 반지름은 : "+radius);
		System.out.println("원의 넓이는 : "+(SimpleSircle.PI*radius*radius));
	}

}
