﻿using System;

namespace _9_3
{
    class Program
    {
        static void Main(string[] args)
        {

            
                for (int i = 2; i <= 8; i=i+2)
            {
                if (i % 2 == 0)
                {
                    Console.Write(i);
                    Console.WriteLine("단");
                }


                for (int j = 1; j <+ 9; j++)
                {
                    Console.Write(i);
                    Console.Write("X");
                    Console.Write(j);
                    Console.Write("=");
                    Console.WriteLine(i * j);
                    Console.WriteLine(" ");

                }
                Console.WriteLine();
            }
            
        }
    }
}
