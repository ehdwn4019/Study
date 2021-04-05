package chap03;

import java.util.Scanner;

public class P142 {

	public static void main(String[] args) {
		int money;
		int currentMoney=0;
		Scanner sc=new Scanner(System.in);
		System.out.print("금액을 입력하세요 : ");
		money=sc.nextInt();
		
		System.out.println("일만원권 : "+(money/10000)+"장");
		currentMoney=money%10000;
		System.out.println("천원권 : "+(currentMoney/1000)+"장");
		currentMoney=money%1000;
		System.out.println("오백원주화 : "+(currentMoney/500)+"개");
		currentMoney=money%500;
		System.out.println("백원주화 : "+(currentMoney/100)+"개");
		currentMoney=money%100;
		System.out.println("십원주화 : "+(currentMoney/10)+"개");
		currentMoney=money%10;
		System.out.println("일원주화 : "+(currentMoney)+"개");
		

	}

}
