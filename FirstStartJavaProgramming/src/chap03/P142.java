package chap03;

import java.util.Scanner;

public class P142 {

	public static void main(String[] args) {
		int money;
		int currentMoney=0;
		Scanner sc=new Scanner(System.in);
		System.out.print("�ݾ��� �Է��ϼ��� : ");
		money=sc.nextInt();
		
		System.out.println("�ϸ����� : "+(money/10000)+"��");
		currentMoney=money%10000;
		System.out.println("õ���� : "+(currentMoney/1000)+"��");
		currentMoney=money%1000;
		System.out.println("�������ȭ : "+(currentMoney/500)+"��");
		currentMoney=money%500;
		System.out.println("�����ȭ : "+(currentMoney/100)+"��");
		currentMoney=money%100;
		System.out.println("�ʿ���ȭ : "+(currentMoney/10)+"��");
		currentMoney=money%10;
		System.out.println("�Ͽ���ȭ : "+(currentMoney)+"��");
		

	}

}
