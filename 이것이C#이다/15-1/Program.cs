using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _15_1
{
    class Car
    {
        public int Cost { get; set; }
        public int MaxSpeed { get; set; }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Car[] cars =
            {
                new Car(){Cost = 56, MaxSpeed = 120},
                new Car(){Cost = 70, MaxSpeed = 150},
                new Car(){Cost = 45, MaxSpeed = 180},
                new Car(){Cost = 32, MaxSpeed = 200},
                new Car(){Cost = 82, MaxSpeed = 280},
            };

            var selected = from tSelect in cars
                           where tSelect.Cost >= 50 && tSelect.MaxSpeed >= 150
                           select new
                           {
                               Cost = tSelect.Cost,
                               MaxSpeed = tSelect.MaxSpeed
                           };

            foreach(var temp in selected)
            {
                Console.WriteLine("cost : {0} , maxSpeed : {1}", temp.Cost, temp.MaxSpeed);
            }
                          

        }
    }
}
