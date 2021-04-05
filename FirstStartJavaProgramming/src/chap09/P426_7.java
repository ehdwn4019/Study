package chap09;

public class P426_7 {

	private final int id;
	public P426_7(int id)
	{
		this.id=id;
	}
	
	public void updateId(int newId)
	{
		//id=newId;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		P426_7 p=new P426_7(44);
		p.updateId(88);
		System.out.println(p.id);
		
	}

}
