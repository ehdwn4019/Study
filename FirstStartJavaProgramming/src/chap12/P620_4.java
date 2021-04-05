package chap12;

public class P620_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		StringBuffer sb1=new StringBuffer(args[0]);
		StringBuffer sb2=new StringBuffer(args[1]);
		System.out.println(sb1.append(sb2));
		System.out.println(sb2.insert(5,sb1));
		System.out.println(sb1.delete(4, 9));
		System.out.println(sb2.delete(5,14));
		
	}

}
