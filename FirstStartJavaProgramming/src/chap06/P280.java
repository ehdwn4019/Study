package chap06;

import java.util.Scanner;
import java.util.Arrays;
import java.util.Random;

public class P280 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		Random rand=new Random();
		
		int [][] student=new int[5][10];
		int [] count=new int[5];
		int [] answer=new int[10];
		
		System.out.print("정답을 입력하세요 (10개) : ");
		
		for(int i=0; i<answer.length; i++)
		{
			answer[i]=sc.nextInt();
		}
		
		//학생
		for(int i=0; i<student.length; i++)
		{
			//학생의 정답
			for(int j=0; j<student[i].length; j++)
			{
				student[i][j]=rand.nextInt(5);
				
				if(answer[i]==student[i][j])
				{
					count[i]++;
				}
			}
			
			System.out.println("학생 "+(i+1)+"의 점수 : "+count[i]+"점");
		}
		
	}
	
	//잘모르겠다.....

}
