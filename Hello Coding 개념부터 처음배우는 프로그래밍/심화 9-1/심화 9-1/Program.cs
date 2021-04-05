using System;

namespace 심화_9_1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] passcodeNumbers = { 6, 2, 1, 9, 4, 7 };

            int passcodeLength = 5;
            int[] userInput = new int[passcodeLength];


            for (int i = 0; i < 5; i++)
            {
                for (int passcodeIndex = 0; passcodeIndex < passcodeLength; passcodeIndex++)
                {
                    Console.Write(passcodeIndex);
                    Console.WriteLine("번째 숫자를 넣어주세요.");
                    userInput[passcodeIndex] = int.Parse(Console.ReadLine());

                }
                for (int passcodeIndex = 0; passcodeIndex < passcodeLength; passcodeIndex++)
                {
                    if (userInput[passcodeIndex] != passcodeNumbers[passcodeIndex])
                    {

                        Console.WriteLine("비밀번호가 틀렸습니다.");
                        break;


                    }


                    if (userInput[passcodeIndex] == passcodeNumbers[passcodeIndex])
                    {
                        Console.WriteLine("문이 열렸습니다.");
                        break;
                    }
                }
            }
        }
    }
}
    

