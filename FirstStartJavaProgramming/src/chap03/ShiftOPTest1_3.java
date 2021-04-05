package chap03;

import java.util.Scanner;

public class ShiftOPTest1_3 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.println("한 개의 숫자를 입력 : ");
		int a=stdin.nextInt();
		boolean flag;
		flag=(a%2==0) ? true :false;
		System.out.println(a+"이(가) 짝수 입니까? : ");
		System.out.println(flag);
		

	}

}
