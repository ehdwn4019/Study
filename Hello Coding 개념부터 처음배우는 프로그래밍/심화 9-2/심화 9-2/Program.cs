using System;

namespace 심화_9_2
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] classscores = new double [5];
            int classcount= 5;
            int studentcount = 10;
            
            for(int i=0; i<classcount; i++)
            {
                Console.Write("3학년");
                Console.Write(i + 1);
                Console.WriteLine("반 성적을 입력합니다.");

                for(int j=0; j<studentcount; j++)
                {
                    Console.Write(j + 1);
                    Console.Write("번째 학생의 성적을 입력해주세요.");
                    classscores[i] = classscores[i] + double.Parse(Console.ReadLine());
                }
            }

            for(int i=0; i<classcount; i++)
            {
                Console.Write("3학년");
                Console.Write(i + 1);
                Console.Write("반의 평균: ");
                Console.WriteLine(classscores[i] / studentcount);
            }

        }
    }
}
