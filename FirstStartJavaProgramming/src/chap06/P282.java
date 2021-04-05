package chap06;

import java.util.Arrays;

public class P282 {

	public static void main(String[] args) {
		// TODO Auto-generated method stubs
		String[] colors= {"blue","red","green","yellow","orange"};
		Arrays.sort(colors);
		int s2=Arrays.binarySearch(colors, "orange");
		int s3=Arrays.binarySearch(colors, "violet");
		System.out.println(s2+" "+s3);

	}

}
