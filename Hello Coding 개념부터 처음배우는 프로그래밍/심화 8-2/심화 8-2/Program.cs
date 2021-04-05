using System;

namespace 심화_8_2
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Console.Write("총학생수: ");
            int total = int.Parse(Console.ReadLine());

            double[] language = new double[total];
            double[] english = new double[total];
            double[] math = new double[total];

            int index = 0;
            while (index<total)
            {
                Console.Write(index + 1);
                Console.WriteLine("번째 학생의 국어 성적을 입력하세요.");
                language[index] = double.Parse(Console.ReadLine());

                Console.Write(index + 1);
                Console.WriteLine("번째 학생의 영어 성적을 입력하세요.");
                english[index] = double.Parse(Console.ReadLine());

                Console.Write(index + 1);
                Console.WriteLine("번째 학생의 수학 성적을 입력하세요.");
                math[index] = double.Parse(Console.ReadLine());

                index = index + 1;
            }

            index = 0;
            while(index<total)
            {
                double score = language[index] + english[index] + math[index];

                Console.Write(index + 1);
                Console.WriteLine("번째 학생의 총점:");
                Console.WriteLine(score);

                Console.Write(index + 1);
                Console.WriteLine("번째 학생의 평균:");
                Console.WriteLine(score/3);

                index = index + 1;
            }


        }
    }
}
