package chap04;

import java.util.Scanner;

public class DoublelTest1 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		int grade=stdin.nextInt();
		if(grade>=90)
			System.out.println("A학점 취득 성공");
		else
			System.out.println("A학점 취득 실패");
		System.out.println("감사합니다.");
	}

}
