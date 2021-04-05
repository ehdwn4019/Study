package chap05;

public class P242 {

	static String o="";
	
	public static void main(String[] args) {
		z : o=o+2;
	for(int x=3; x<8; x++)
	{
		if(x==4) break;
		//if(x==6) break z;
		o=o+x;
	}
	System.out.println(o);

	}

	
	//문제 정답 -> 프로그램 오류  / 레이블은 반복문안에서 사용가능?
}
