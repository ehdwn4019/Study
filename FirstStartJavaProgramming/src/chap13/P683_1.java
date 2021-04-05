package chap13;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class P683_1 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		FileOutputStream fos=new FileOutputStream("temp1.txt");
		System.out.print("입력된 내용 : ");
		for(int i=256; i<266; i++)
		{
			fos.write(i);
			System.out.print(i+" ");
		}
		System.out.println();
		fos.close();
		FileInputStream fis=new FileInputStream("temp1.txt");
		System.out.print("출력된 내용 : ");
		for(int i=0; i<10; i++)
		{
			System.out.print(fis.read()+" ");
		}

	}

}
