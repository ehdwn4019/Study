package chap04;

import java.util.Scanner;

public class SwitchTest1 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.println("���� �Է��ϼ��� : ");
		int month=stdin.nextInt();
		String MtoS;
		switch(month)
		{
		case 12:
		case 1:
		case 2:
			MtoS="�ܿ��Դϴ�.";
			break;
		case 3:
		case 4:
		case 5:
			MtoS="���Դϴ�";
			break;
		case 6:
		case 7:
		case 8:
			MtoS="�����Դϴ�";
			break;
		case 9:
			System.out.println("���� 9���� ");
		case 10:
			System.out.println("�Ƹ��ٿ� 10����");
		case 11:
			System.out.println("������ 11����");
			MtoS="�����Դϴ�.";
			break;
			default:
				MtoS="1~12���� ��� ���Դϴ�.";
				break;
		}
		
		System.out.println(MtoS);
	}

}
