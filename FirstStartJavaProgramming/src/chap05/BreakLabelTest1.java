package chap05;

public class BreakLabelTest1 {

	public static void main(String[] args) {
		boolean t=true;
		Firest:{
			Second:{
			Third:{
			System.out.println("Third ��� 'break' ���� ��");
			if(t) break Second;
			System.out.println("Third ��� 'break' ���� ��");
		}
		System.out.println("Second ��� ����");
		}
		System.out.println("First ��� ����");
		}
		System.out.println("main ��� ����");

	}

}
