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
			System.out.println("큐가 차 있습니다");
			return;
		}
		
		itemArray[rear]=x;
		rear=rear+1;
		count++;
		System.out.println(x+"입력 : 원소개수 "+count);
		
	}
	
	public int Dequeue()
	{
		if(isEmpty())
		{
			System.out.println("큐에 데이터가 없습니다");
			return count;
		}
	
		
		int out=itemArray[front];
		front=front+1;
		count--;
		System.out.println(out+"출력 : 원소개수 "+count);
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
