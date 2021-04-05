package chap05;

public class P239 {

	public static void main(String[] args) {
		block1 : for(int i=1; i<10; i++)
		{
			System.out.print(i+" ");
			block2 : for(int j=1; j<10; j++)
			{
				if(i*j>50)break block1;
			}
		}
	System.out.println();
	block3 : System.out.println("블럭3 수행");

	}

}
