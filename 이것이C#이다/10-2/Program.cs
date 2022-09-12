using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _10_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] A = new int[2, 2]
            {
                { 3,2 },
                { 1,4 },
            };

            int[,] B = new int[2, 2]
            {
                { 9,2 },
                { 1,7 },
            };

            int[][,] C = new int[2][,];

            for(int i=0; i<A.GetLength(0); i++)
            {
                int firstSum = 0;
                int secondSum = 0;

                for(int j=0; j<B.GetLength(0); j++)
                {
                    firstSum += A[i, j] * B[j, 0];
                    Console.WriteLine(A[i, j] + " , " + B[j, 0]);
                }

                Console.WriteLine();

                for(int j=0; j<B.GetLength(0); j++)
                {
                    secondSum += A[i, j] * B[j, 1];
                    Console.WriteLine(A[i, j] + " , " + B[j, 1]);
                }

                Console.WriteLine();

                C[i] = new int[,] { { firstSum } , { secondSum } };
            }
            
            foreach(var i in C)
            {
                foreach(var j in i)
                {
                    Console.Write(j+" ");
                }

                Console.WriteLine();
            }
        }
    }
}