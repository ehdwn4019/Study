package chap08;

import java.util.Scanner;

public class SumofOdd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner stdin=new Scanner(System.in);
		System.out.println("Ȧ�� ������ ������ �� ���� ���ڸ� �Է�(���� ������ �������� ����) : ");
		int n=stdin.nextInt();
		int m=stdin.nextInt();
		Sum s=new Sum();
		System.out.println(n+"����"+m+"������ Ȧ���� �� : "+s.oddsum(n, m));
	}

}
