package chap04;

import java.util.Scanner;


public class SwitchTest2 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.println("숫자를 입력하세요 : ");
		int number =stdin.nextInt();
		String MtoS;
		switch(number % 3)
		{
			case 0:
				System.out.println("가위를 선택하셨습니다.");
				break;
			case 1:
				System.out.println("바위를 선택하셨습니다.");
				break;
			case 2:
				System.out.println("보를 선택하셨습니다.");
				break;
		}

	}

}
