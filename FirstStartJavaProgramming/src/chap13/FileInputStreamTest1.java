package chap13;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;

public class FileInputStreamTest1 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		Scanner stdin=new Scanner(System.in);
		System.out.print("�Է� ���ϸ��� �Է��ϼ��� : ");
		String s=stdin.next();
		FileInputStream fis=new FileInputStream(s);
		int i;
		while((i=fis.read())!=-1)
		{
			System.out.println(i);
		}
		fis.close();
		System.out.println(s+"���Ϸκ��� ����Ʈ�� �о� ȭ�鿡 ����Ͽ����ϴ�.");
		
		
	}

}
