package chap08;

public class P372_2 {

	static int i,j,k;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int i=2;
		int j=3;
		{
			int k=4;
			System.out.println("i와 j의 합은 : "+(i+j));
			System.out.println("클래스변수 i와 j의 합은 : "+(P372_2.i+P372_2.j));
		}
		
		k=i+k;
		System.out.println("k는 : "+k);
		System.out.println("j는 : "+j);
		System.out.println("i는 : "+i);
		System.out.println("클래스변수 i:"+P372_2.i);
		
	}

}
