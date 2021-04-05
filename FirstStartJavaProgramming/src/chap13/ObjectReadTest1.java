package chap13;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;

public class ObjectReadTest1 extends Box{

	public ObjectReadTest1(int w, int h, int d) {
		super(w, h, d);
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		
		ObjectInputStream ois=new ObjectInputStream(new FileInputStream("tmp.txt"));
		Object s2=ois.readObject();
		ObjectWriteTest1 owt=new ObjectWriteTest1();
		Box mybox2 = (Box)ois.readObject();
		System.out.println(s2);
		System.out.println("박스의 가로는 : "+mybox2.width);
		System.out.println("박스의 세로는 : "+mybox2.height);
		System.out.println("박스의 높이는 : "+mybox2.depth);
		System.out.println("Double 값은 : "+ois.readDouble());
	}

}
