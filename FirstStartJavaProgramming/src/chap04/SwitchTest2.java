package chap04;

import java.util.Scanner;


public class SwitchTest2 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.println("���ڸ� �Է��ϼ��� : ");
		int number =stdin.nextInt();
		String MtoS;
		switch(number % 3)
		{
			case 0:
				System.out.println("������ �����ϼ̽��ϴ�.");
				break;
			case 1:
				System.out.println("������ �����ϼ̽��ϴ�.");
				break;
			case 2:
				System.out.println("���� �����ϼ̽��ϴ�.");
				break;
		}

	}

}
