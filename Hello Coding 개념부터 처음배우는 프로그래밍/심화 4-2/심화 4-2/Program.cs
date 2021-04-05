using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 심화_4_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int coin = 10;
            string coinMessage = "주머니 속 동전의 개수: ";
            Console.Write(coinMessage);
            Console.WriteLine(coin);

            int aramCoin = (coin / 2);
            aramCoin = aramCoin - 1;
            Console.Write("아람이가 가져간 동전의 개수: ");
            Console.WriteLine(aramCoin);

            coin = coin - aramCoin;

            int uramCoin = (coin / 2);
            uramCoin = uramCoin + 2;
            Console.Write("우람이가 가져간 동전의 개수: ");
            Console.WriteLine(uramCoin);

            coin = coin - uramCoin;

            Console.Write(coinMessage);
            Console.WriteLine(coin);
        }
    }
}
