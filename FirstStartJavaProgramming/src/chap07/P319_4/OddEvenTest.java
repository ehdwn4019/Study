package chap07.P319_4;

import java.util.Scanner;

public class OddEvenTest{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		OddEven oddEven=new OddEven();
		
		System.out.print("숫자를 입력하세요 : ");
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		System.out.println("짝수의 합 :"+oddEven.sumOddeven(num));
		System.out.println("홀수의 합 : "+oddEven.sumOdd(num));
		

		
	}

}
