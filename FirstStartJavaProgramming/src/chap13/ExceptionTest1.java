package chap13;

import java.io.FileReader;

public class ExceptionTest1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try {
			FileReader file =new FileReader("a.txt");
			int i;
			while((i=file.read())!=-1)
				System.out.print((char)i);
			file.close();
		} catch (Exception e) {
			// TODO: handle exception
			
			System.out.println("예외 처리 루틴 : "+e+"파일이 존재하지 않는다.");
		}
		
	}

}
