using System;

namespace 기초_9_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] scores = new int[5];


            for(int subject=0; subject < 5; subject++)
            {
                Console.Write(subject+1);
                Console.WriteLine("번째 과목의 성적을 입력하세요.");
                scores[subject] = int.Parse(Console.ReadLine());
            }
           
            

            Console.Write("총점은 ");
            Console.Write(scores[0] + scores[1] + scores[2] + scores[3] + scores[4]);
            Console.WriteLine("점입니다.");
        }
    }
}
