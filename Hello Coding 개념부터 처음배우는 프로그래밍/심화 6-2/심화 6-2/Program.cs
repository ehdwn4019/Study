using System;

namespace 심화_6_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int userInput = int.Parse(Console.ReadLine());

            if(userInput>20 && userInput%3==0)
            {
                Console.WriteLine("20보다 큰 3의 배수입니다.");
            }
            else
            {
                Console.WriteLine("조건에 맞지 않는 수입니다.");
            }
        }
    }
}
