package chap08;

import java.util.Scanner;

public class SumofEven {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner stdin=new Scanner(System.in);
		System.out.println("¦�� ������ ������ �� ���� ���ڸ� �Է�(���� ������ �������� ����) : ");
		int n=stdin.nextInt();
		int m=stdin.nextInt();
		Sum s=new Sum();
		System.out.println(n+"����"+m+"������ ¦���� �� : "+s.evensum(n, m));
	}

}
