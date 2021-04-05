package chap12.b_package;

import chap12.a_package.Test1;
//위에거 아니면 밑에거 둘중에 하나 
//밑에는 가리키는 패키지의 모든 것을 들고온다는 의미
import chap12.a_package.*;

public class Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Test1 ss=new Test1();
		System.out.println(ss.sum(10, 20));
		
		
	}

}
