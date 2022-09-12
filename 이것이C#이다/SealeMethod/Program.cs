using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SealeMethod
{
    class Base
    {
        public virtual void SealMe()
        {

        }
    }

    class Derived : Base
    {
        public sealed override void SealMe()
        {
            base.SealMe();
        }
    }

    class WantToOverride : Derived
    {
        //public override void SealMe()
        //{
        //
        //}
    }

    class Program
    {
        static void Main(string[] args)
        {
        }
    }
}
