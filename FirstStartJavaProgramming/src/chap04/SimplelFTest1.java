package chap04;

import java.util.Scanner;

public class SimplelFTest1 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.print("한 개의 숫자를입력 : ");
		int count =stdin.nextInt();
		if(count<0)
		{
			System.out.println(count+"은(는) 음수입니다");
		}

	}

}
