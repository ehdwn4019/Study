package chap12;

public class P617_8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.println("==����� �Է� ������==");
		for(int k=0; k<args.length; k++)
			System.out.print(args[k]+" ");
		
		System.out.println();
		System.out.println("==���� �� ������==");
		for(int j=0; j<args.length; j++)
		{
			for(int i=j+1; i<args.length; i++)
			{
				if(args[i].compareTo(args[j])<0)
				{
					String t=args[j];
					args[j]=args[i];
					args[i]=t;
				}
			}
			System.out.print(args[j]+" ");
		}
	}

}
