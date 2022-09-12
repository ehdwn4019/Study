﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ShiftOperator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Testing <<...");

            int a = 1;
            Console.WriteLine("a        : {0:05}(0x{0:x8})", a);
            Console.WriteLine("a << 1 : {0:D5}(0x{0:X8})", a << 1);
            Console.WriteLine("a << 2 : {0:D5}(0x{0:X8})", a << 2);
            Console.WriteLine("a << 5 : {0:d5}(0x{0:X8})", a << 5);

            Console.WriteLine("\nTesting >>...");

            int b = 255;
            Console.WriteLine("b        : {0:D5}(0x{0:X8})", b);
            Console.WriteLine("b >> 1 : {0:D5}(0x{0:X8})", b >> 1);
            Console.WriteLine("b >> 2 : {0:D5}(0x{0:X8})", b >> 2);
            Console.WriteLine("b >> 5 : {0:D5}(0x{0:X8})", b >> 5);

            int c = -255;
            Console.WriteLine("b        : {0:D5}(0x{0:X8})", c);
            Console.WriteLine("b >> 1 : {0:D5}(0x{0:X8})", c >> 1);
            Console.WriteLine("b >> 2 : {0:D5}(0x{0:X8})", c >> 2);
            Console.WriteLine("b >> 5 : {0:D5}(0x{0:X8})", c >> 5);


        }
    }
}
