package chap12;

public class StringTest1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char a[]= {'C','O','M','P','U','T','E','R'};
		String s1=new String(a);
		String s2=new String(a,3,2);
		String s3=new String("처음 시작하는자바");
		String s4="단축 초기화 문자열";
		System.out.println("문자열 s1 : "+s1);
		System.out.println("문자열 s1의 길이 : "+s1.length());
		System.out.println("문자열 s2 : "+s2);
		System.out.println("문자열 s3 : "+s3);
		System.out.println("문자열 s4 : "+s4);

	}

}
