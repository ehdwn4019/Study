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
		
		
		System.out.print("���� �������� �Է��ϼ��� : ");
		radius=sc.nextInt();
		System.out.println("���� �������� : "+radius);
		System.out.println("���� ���̴� : "+(SimpleSircle.PI*radius*radius));
	}

}
