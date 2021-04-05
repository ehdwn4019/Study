using System;

namespace 심화문제_7_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int score = 5; 
            double[] subjects = new double[score];
            
            Console.WriteLine("국어 점수를 입력하세요:");
            subjects[0] = double.Parse(Console.ReadLine());

            Console.WriteLine("영어 점수를 입력하세요:");
            subjects[1] = double.Parse(Console.ReadLine());

            Console.WriteLine("수학 점수를 입력하세요:");
            subjects[2] = double.Parse(Console.ReadLine());

            Console.WriteLine("과학 점수를 입력하세요:");
            subjects[3] = double.Parse(Console.ReadLine());

            Console.WriteLine("사회 점수를 입력하세요:");
            subjects[4] = double.Parse(Console.ReadLine());

            Console.Write("5과목 총점:");
            Console.WriteLine(subjects[0] + subjects[1] + subjects[2] + subjects[3]+subjects[4]);

            Console.Write("5과목 평균:");
            Console.WriteLine((subjects[0] + subjects[1] + subjects[2] + subjects[3] + subjects[4]) / 5);

        }
    }
}
