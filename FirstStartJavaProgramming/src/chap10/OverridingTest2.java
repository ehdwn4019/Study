package chap10;

class Ramyon1
{
	protected String boiled_pot;
	protected String boilWater(String elecpot,String water)
	{
		System.out.println(elecpot+"��"+water+"�� �־� ���δ�(RamyonŬ����)");
		return "���� ��";
	}
	public void cookRamyon(String ramyon,String vegetable,int time)
	{
		boiled_pot=boilWater("���� ����","��");
		System.out.println(boiled_pot+"��"+ramyon+"��"+vegetable+"�� �ְ�"
				+time+"�а� ���δ�(Ramyon1Ŭ����)");
		System.out.println("�Ϲ� ��� �丮 �Ϸ�(Ramyon1 Ŭ����)");
		
	}
}

class MixedRamyon extends Ramyon1
{
	public void CookRamyon(String ramyon,String vegetable,int time)
	{
		boiled_pot=boilWater("���� ���� ","��");
		System.out.println(boiled_pot+"��"+ramyon+"��"+vegetable+"��(��) �ְ�"
				+time+"�а� ���δ�(MixedRamyonŬ����)");
		System.out.println("�鸸 ����� ���� ���� ������(MixedRamyonŬ����)");
		System.out.println("������� �ְ� ����(MixedRamyonŬ����)");
		System.out.println("������ �丮 �Ϸ�(MixedRamyonŬ����)");
	}
}

public class OverridingTest2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int s;
		Ramyon1 r=new Ramyon1();
		r.cookRamyon("�Ŷ��", "��", 5);
		MixedRamyon mr=new MixedRamyon();
		mr.CookRamyon("�����", "����", 6);
		
		
	}

}
