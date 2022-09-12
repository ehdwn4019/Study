using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DerivedFromArray
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[] { 10, 30, 20, 7, 1 };
            Console.WriteLine($"Type Of array : {array.GetType()}");
            Console.WriteLine($"Base type Of array : {array.GetType().BaseType}");
        }
    }
}
