package chap11;

interface Queue
{
	boolean isEmpty();
	void Enqueue(int x);
	int Dequeue();
}

class MyQueue implements Queue
{
	int[] itemArray=new int[50];
	int rear;
	int count;
	int front;
	
	public MyQueue()
	{
		rear=0;
		count=0;
		front=0;
		
		
	}
	
	public boolean isEmpty()
	{
		if(count<=0)
			return true;
		return false;
	}
	
	public void Enqueue(int x)
	{
		if(count>50)
		{
			System.out.println("ť�� �� �ֽ��ϴ�");
			return;
		}
		
		itemArray[rear]=x;
		rear=rear+1;
		count++;
		System.out.println(x+"�Է� : ���Ұ��� "+count);
		
	}
	
	public int Dequeue()
	{
		if(isEmpty())
		{
			System.out.println("ť�� �����Ͱ� �����ϴ�");
			return count;
		}
	
		
		int out=itemArray[front];
		front=front+1;
		count--;
		System.out.println(out+"��� : ���Ұ��� "+count);
		return out;
		
		
	
		

		
	}
}

public class P563_9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int ii;
		MyQueue mq =new MyQueue();
		for(ii=0; ii<10; ii++)
		{
			mq.Enqueue(ii);
		}
		for(ii=0; ii<10; ii++)
		{
			mq.Dequeue();
		}
		mq.Dequeue();
		
	}

}
