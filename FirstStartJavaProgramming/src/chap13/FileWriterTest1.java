package chap13;

import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileWriterTest1 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		Scanner stdin= new Scanner(System.in);
		String source="��� �־�� ��μ� ���������� ���\n"+"������ ����Ѵٴ� ����\n"+
		"����� �������� ��ħ�� �´´ٴ� ���Դϴ�.\n";
		char input[] =new char[source.length()];
		source.getChars(0, source.length(), input, 0);
		System.out.print("���ϸ��� �Է��ϼ��� : ");
		String s=stdin.next();
		FileWriter fw=new FileWriter(s);
		fw.write(source);
		fw.close();
		System.out.print(s+"������ �����Ǿ����ϴ�");
		
	}

}
