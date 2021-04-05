package chap12;

public class P616_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String test="a1b2c3d123e";
		String[] tokens=test.split("\\d");
		System.out.println(tokens.length);
		for (String s : tokens) {
			System.out.print(s+" ");
		}
		
	}

}
