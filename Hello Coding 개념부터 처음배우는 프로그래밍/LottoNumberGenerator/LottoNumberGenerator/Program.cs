using System;

namespace LottoNumberGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            int LottoLength = 6;
            int[] LottoNumbers = new int[LottoLength];

            Random random = new Random();

            int LottoNumberIndex = 0;
            while(LottoNumberIndex<LottoLength)
            {
                LottoNumbers[LottoNumberIndex] = random.Next(1, 46);

                bool hasDupLicate = false;
                for(int i=0; i<LottoNumberIndex; i++)
                {
                    if(LottoNumbers[LottoNumberIndex]==LottoNumbers[i])
                    {
                        hasDupLicate = true;
                        break;
                    }
                }
                if(!hasDupLicate)
                {
                    LottoNumberIndex++;
                }
            }

            Console.Write("로또 번호: ");
            for(int i=0; i<LottoLength; i++)
            {
                Console.Write(LottoNumbers[i]);
                Console.Write(",");
            }
            Console.WriteLine();
        }
    }
}
