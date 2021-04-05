package chap04;

import java.util.Scanner;

public class MultilFTest2 {

	public static void main(String[] args) {
		Scanner stdin=new Scanner(System.in);
		System.out.println("숫자를 입력 : ");
		int count=stdin.nextInt();
		if(count<0)
		{
			System.out.println("입력된 수 "+count);
			System.out.println("은(는) 음수입니다");
		}
		else if(count==0)
			System.out.println("입력된 수는 0입니다");
		else 
		{
			System.out.println("입력된 수 "+count);
			System.out.println("은(는) 양수입니다");
		}

	}

}
