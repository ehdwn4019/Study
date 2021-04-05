package chap12.packageC;

import chap12.packageA.*;

public class P607_3_2 extends P607_3_1{

	public String getText()
	{
		return super.getText()+"<msg>text</msg>";
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.println(new P607_3_2().getText());
		System.out.println(new P607_3_1().getText());
	}

}
