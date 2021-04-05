using System;

namespace 심화_5_3
{
    class Program
    {
        static void Main(string[] args)
        {
            int coin = 10;

            Console.WriteLine("주머니에는 동전 10개 들어 있습니다.");

            Console.WriteLine("어머니는 몇 개의 동전을 주머니에 넣었나요? ");
            int mom = int.Parse(Console.ReadLine());

            Console.WriteLine("아람이는 몇 개의 동전을 꺼냈나요? ");
            int aram = int.Parse(Console.ReadLine());

            Console.WriteLine("우람이는 몇 개의 동전을 꺼냈나요? ");
            int wuram = int.Parse(Console.ReadLine());

            coin = coin + mom - aram - wuram;
            Console.Write("주머니에 남아있는 동전의 개수는");
            Console.Write(coin);
            Console.WriteLine("개 입니다.");
                
        }
    }
}
