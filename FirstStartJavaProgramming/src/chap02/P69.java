package chap02;

import java.util.Scanner;
public class P69 {
	public static void main(String[] s)
	{
		Scanner stdIn=new Scanner(System.in);
		int a=stdIn.nextInt();
		int b= stdIn.nextInt();
		System.out.println(a+"-"+b+"의 결과는"+(a-b)+"입니다");
	}
}
