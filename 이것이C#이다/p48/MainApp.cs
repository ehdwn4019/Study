using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace p48
{
    class MainApp
    {
        static void Main(string[] args)
        {
            sbyte a = -10;
            byte b = 40;

            //quiz 3-1 
            //sbyte a= -5000_0000_0000;

            Console.WriteLine($"a={a}, b= {b}");

            short c = -30000;
            ushort d = 60000;

            Console.WriteLine($"c={c}, d={d}");

            int e = -1000_0000;
            uint f = 3_0000_0000;

            Console.WriteLine($"e={e} , f={f}");

            long g = -5000_0000_0000;
            ulong h = 200_0000_0000_0000_0000;

            Console.WriteLine($"g={g} , h={h}");
        }
    }
}
