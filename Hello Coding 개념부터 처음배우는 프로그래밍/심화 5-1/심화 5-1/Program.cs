using System;

namespace 심화_5_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("첫 번째 숫자를 입력하세요: ");
            string userInput1 = Console.ReadLine();
            double number1 = int.Parse(userInput1);


            Console.Write("두 번째 숫자를 입력하세요: ");
            string userInput2 = Console.ReadLine();
            double number2 = int.Parse(userInput2);

            Console.Write(number1);
            Console.Write("+");
            Console.Write(number2);
            Console.Write("=");
            Console.WriteLine(number1 + number2);

            Console.Write(number1);
            Console.Write("-");
            Console.Write(number2);
            Console.Write("=");
            Console.WriteLine(number1 - number2);

            Console.Write(number1);
            Console.Write("*");
            Console.Write(number2);
            Console.Write("=");
            Console.WriteLine(number1 * number2);

            Console.Write(number1);
            Console.Write("/");
            Console.Write(number2);
            Console.Write("=");
            Console.WriteLine(number1 / number2);


        }
    }
}
