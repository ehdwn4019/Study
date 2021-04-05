package chap02;
import java.util.Scanner;
public class P70 {
	public static void main(String[] args)
	{
		Scanner stdIn=new Scanner(System.in);
		String from=stdIn.next();
		String name=stdIn.next();
		int age=stdIn.nextInt();
		double height=stdIn.nextDouble();
		System.out.print("나의 국적은 "+ from +"이며 ");
		System.out.println("이름은 " +name+"입니다");
		System.out.print("나이는 "+age+"이며 ");
		System.out.println("키는 "+height+" 입니다");
	}

}
