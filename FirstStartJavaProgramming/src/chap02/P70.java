package chap02;
import java.util.Scanner;
public class P70 {
	public static void main(String[] args)
	{
		Scanner stdIn=new Scanner(System.in);
		String from=stdIn.next();
		String name=stdIn.next();
		int age=stdIn.nextInt();
		double height=stdIn.nextDouble();
		System.out.print("���� ������ "+ from +"�̸� ");
		System.out.println("�̸��� " +name+"�Դϴ�");
		System.out.print("���̴� "+age+"�̸� ");
		System.out.println("Ű�� "+height+" �Դϴ�");
	}

}
