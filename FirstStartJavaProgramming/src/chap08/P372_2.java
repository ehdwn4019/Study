package chap08;

public class P372_2 {

	static int i,j,k;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int i=2;
		int j=3;
		{
			int k=4;
			System.out.println("i�� j�� ���� : "+(i+j));
			System.out.println("Ŭ�������� i�� j�� ���� : "+(P372_2.i+P372_2.j));
		}
		
		k=i+k;
		System.out.println("k�� : "+k);
		System.out.println("j�� : "+j);
		System.out.println("i�� : "+i);
		System.out.println("Ŭ�������� i:"+P372_2.i);
		
	}

}
