package chap13;

import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class FileReaderTest1 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		Scanner stdin=new Scanner(System.in);
		System.out.print("읽어 들일 파일명을 입력하세요 : ");
		String s=stdin.next();
		FileReader fr=new FileReader(s);
		int i;
		while((i=fr.read())!=-1)
		{
			System.out.print((char)i);
		}
		fr.close();
		
	}

}
