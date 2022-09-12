using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Test;

namespace Test
{
    public static class Temp
    {
        public static string temp(this string temp, string temp2)
        {
            return temp + temp2;
        }
    }
}

namespace P275Quiz
{
    class Program
    {
        static void Main(string[] args)
        {
            string hello = "Hello";
            Console.WriteLine(hello.temp(", World!"));
        }
    }
}
