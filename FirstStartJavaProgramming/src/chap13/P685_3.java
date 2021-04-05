package chap13;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class P685_3 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		if(args.length!=2)
		{
			System.out.println("�Ű� ������ �ҽ� ���ϰ� Ÿ�������� �����ϼ���");
			System.exit(0);
		}
		File sf=new File(args[0]);
		if(!sf.exists())
			System.out.println("�ҽ������� �������� �ʽ��ϴ�.");
		System.exit(0);
		
		File tf=new File(args[1]);
		if(tf.exists())
		{
			System.out.println("Ÿ�������� �̹� �����մϴ�");
			System.out.println("����⸦ �����Ͻðڽ��ϱ�?(y/n)");
			char choice=(char)System.in.read();
			if(choice=='n'||choice=='N') System.exit(0);
		}
		BufferedInputStream bis=new BufferedInputStream(new FileInputStream(sf));
		BufferedOutputStream bos =new BufferedOutputStream(new FileOutputStream(tf));
		
		
		System.out.println("�ҽ� ������ : "+args[0]);
		int i;
		while((i=bis.read())!=-1)
		{
			bos.write((byte)i);
		}
		System.out.println("Ÿ�������� : "+args[1]);
		System.out.println("���簡 ����Ǿ����ϴ�");
		bis.close();
	}

}
