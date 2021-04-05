using System;

namespace DoorLock
{
    class Program
    {
        static void Main(string[] args)
        {
            int passcodeNumber1 = 6;
            int passcodeNumber2 = 2;

            Console.Write("첫 번째 숫자를 넣어주세요.");
            int userinput1 = int.Parse(Console.ReadLine());
            Console.Write("두 번째 숫자를 넣어주세요.");
            int userinput2 = int.Parse(Console.ReadLine());
            

            if(userinput1==passcodeNumber1&&userinput2==passcodeNumber2)
            {
                    Console.WriteLine("문이 열렸습니다.");
            }
        }
    }
}
