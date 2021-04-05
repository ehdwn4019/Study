package chap11;

class Animal
{
	public String noise()
	{
		return "peep";
	}
}

class Dog extends Animal
{
	public String noise()
	{
		return "bark";
	}
}

class Cat extends Animal
{
	public String noise()
	{
		return "meow";
	}
}

public class P550_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Animal animal=new Dog();
		Cat cat=(Cat)animal;
		System.out.println(cat.noise());
		
	}

}
