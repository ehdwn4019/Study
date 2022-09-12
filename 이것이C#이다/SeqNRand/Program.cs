using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace SeqNRand
{
    class Program
    {
        static void Main(string[] args)
        {
            Stream outStream = new FileStream("a.dat", FileMode.Create);
            Console.WriteLine($"Position : {outStream.Position}");

            outStream.WriteByte(0x01);
            Console.WriteLine($"Position : {outStream.Position}");

            outStream.WriteByte(0x02);
            Console.WriteLine($"Position : {outStream.Position}");

            outStream.WriteByte(0x03);
            Console.WriteLine($"Position : {outStream.Position}");

            outStream.Seek(5, SeekOrigin.Current); //현재 위치에서 5바이트 뒤로 이동 
            Console.WriteLine($"Position : {outStream.Position}");

            outStream.WriteByte(0x04);
            Console.WriteLine($"Position : {outStream.Position}");

            outStream.Close();

            //비타민 퀴즈
            Stream inStream = new FileStream("a.dat", FileMode.Open);

            var rBytes = new Byte[inStream.Length];

            int i = 0;
            while (inStream.Position < inStream.Length)
                rBytes[i++] = (byte)inStream.ReadByte(); 


        }
    }
}
