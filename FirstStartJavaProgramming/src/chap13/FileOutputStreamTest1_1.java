package chap13;

import java.io.DataOutputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class FileOutputStreamTest1_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner stdin=new Scanner(System.in);
		System.out.print("����� ���ϸ��� �Է��ϼ��� : ");
		String s=stdin.next();
		FileOutputStream fos=null;
		try {
			fos = new FileOutputStream(s);
			DataOutputStream dos=new DataOutputStream(fos);
			dos.writeBoolean(false);
			dos.writeByte(Byte.MAX_VALUE);
			dos.writeChar('��');
			dos.writeDouble(Double.MAX_VALUE);
			dos.writeFloat(Float.MAX_VALUE);
			dos.writeInt(Integer.MAX_VALUE);
			dos.writeLong(Long.MAX_VALUE);
			dos.writeShort(Short.MAX_VALUE);
			fos.close();
			System.out.print(s+"������ �����Ǿ����ϴ�");
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		
	}

}
