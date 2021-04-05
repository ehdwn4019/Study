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
			System.out.println("매개 변수로 소스 파일과 타겟파일을 지정하세요");
			System.exit(0);
		}
		File sf=new File(args[0]);
		if(!sf.exists())
			System.out.println("소스파일이 존재하지 않습니다.");
		System.exit(0);
		
		File tf=new File(args[1]);
		if(tf.exists())
		{
			System.out.println("타겟파일이 이미 존재합니다");
			System.out.println("덮어쓰기를 수행하시겠습니까?(y/n)");
			char choice=(char)System.in.read();
			if(choice=='n'||choice=='N') System.exit(0);
		}
		BufferedInputStream bis=new BufferedInputStream(new FileInputStream(sf));
		BufferedOutputStream bos =new BufferedOutputStream(new FileOutputStream(tf));
		
		
		System.out.println("소스 파일은 : "+args[0]);
		int i;
		while((i=bis.read())!=-1)
		{
			bos.write((byte)i);
		}
		System.out.println("타겟파일은 : "+args[1]);
		System.out.println("복사가 종료되었습니다");
		bis.close();
	}

}
