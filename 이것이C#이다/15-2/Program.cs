﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _15_2
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
                new Car(){Cost = 56,MaxSpeed = 120},
                new Car(){Cost = 70,MaxSpeed = 150},
                new Car(){Cost = 45,MaxSpeed = 180},
                new Car(){Cost = 32,MaxSpeed = 200},
                new Car(){Cost = 82,MaxSpeed = 280},
            };

            var selected = cars.Where(c => c.Cost < 60).OrderBy(c => c.Cost);

            foreach(var temp in selected)
            {
                Console.WriteLine("cost : {0} , maxSpeed : {1}", temp.Cost, temp.MaxSpeed);
            }

            Console.WriteLine();

            var selected2 = from tSelect in cars
                       where tSelect.Cost < 60
                       orderby tSelect.Cost
                       select new
                       {
                           Cost = tSelect.Cost,
                           MaxSpeed = tSelect.MaxSpeed,
                       };

            foreach(var temp in selected2)
            {
                Console.WriteLine("cost : {0} , maxSpeed : {1}", temp.Cost, temp.MaxSpeed);
            }
        }
    }
}
