package chap07.P319_4;

import java.util.Scanner;

public class OddEvenTest{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		OddEven oddEven=new OddEven();
		
		System.out.print("���ڸ� �Է��ϼ��� : ");
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		System.out.println("¦���� �� :"+oddEven.sumOddeven(num));
		System.out.println("Ȧ���� �� : "+oddEven.sumOdd(num));
		

		
	}

}
