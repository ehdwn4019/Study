package chap04;

import java.util.Scanner;

public class DoublelFTest2 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.print("���ڸ� �Է� : ");
		int count=stdin.nextInt();
		if(count<0)
		{
			System.out.println("�Էµ� �� "+count);
			System.out.println("��(��) �����Դϴ�");
		}
		else
		{
			System.out.println("�Էµ� �� "+count);
			System.out.println("��(��) ������ �ƴմϴ�");
		}
	}

}
