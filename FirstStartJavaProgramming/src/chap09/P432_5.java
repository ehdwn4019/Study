package chap09;

class ClassAA
{
	public ClassBB classBB=new ClassBB();
	public void methodA()
	{
		System.out.println(classBB.getValue());
	}
	
}

class ClassBB
{
	public ClassCC classcc;   // = new ClassCC(); �����ָ� ��Ÿ�� ���� 
	public String getValue()
	{
		return classcc.getValue();
	}
}

class ClassCC
{
	public String value;
	public String getValue()
	{
		return "ClassCC";
	}
}

public class P432_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		ClassAA classAA=new ClassAA();
		classAA.methodA();
		
	}

}
