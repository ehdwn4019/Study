package chap13;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;

public class P689_6 implements Serializable{

	private Tree tree=new Tree();
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		P689_6 f= new P689_6();
		FileOutputStream fs=new FileOutputStream("Forest.ser");
		ObjectOutputStream os=new ObjectOutputStream(fs);
		os.writeObject(f);
		os.close();
	}
}

class Tree implements Serializable
{
	//Serializable�� ������ Ŭ������ ���ο��� �ٸ�Ŭ������ ��ü ������ �� Ŭ������ Serializable��
	//�����ؾ��Ѵ�.
}
