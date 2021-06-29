using System;

namespace URI_3170
{
    class Program
    {
        static void Main(string[] args)
        {
            int B, G;
            B = Convert.ToInt32(Console.ReadLine());
            G = Convert.ToInt32(Console.ReadLine());
            if (G % 2 != 0)
            {
                G = G - 1;
            }
            if (G / 2 == B)
            {
                Console.WriteLine("Amelia tem todas bolinhas!");

            }
            else
            {
                Console.WriteLine($"Faltam {(G / 2) - B} bolinha(s)");
            }
            Console.ReadKey();

        }
    }
}
