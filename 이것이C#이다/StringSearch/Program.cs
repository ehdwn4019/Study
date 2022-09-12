using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace StringSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            string greeting = "Good Morning";

            WriteLine(greeting);
            WriteLine();

            WriteLine("IndexOf 'Good' : {0}", greeting.IndexOf("Good"));
            WriteLine("IndexOf 'o' : {0}", greeting.IndexOf('o'));

            WriteLine("LastIndexOf 'Good' : {0}", greeting.LastIndexOf("Good"));
            WriteLine("LastIndexOf 'o' : {0}", greeting.LastIndexOf("o"));

            WriteLine("StartsWith 'Good' : {0}", greeting.StartsWith("Good"));
            WriteLine("StartsWith 'Morning' : {0}", greeting.StartsWith("Morning"));

            WriteLine("EndsWith 'Good' : {0}", greeting.EndsWith("Good"));
            WriteLine("EndsWith 'Morning' : {0}", greeting.EndsWith("Morning"));

            WriteLine("Contains 'Evening' : {0}", greeting.Contains("Evening"));
            WriteLine("Contains 'Morning' : {0}", greeting.Contains("Morning"));

            WriteLine("Replaced 'Morning' with 'Evening' : {0}", greeting.Replace("Morning", "Evening"));
        }
    }
}
