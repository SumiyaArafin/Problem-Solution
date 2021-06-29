using System;

namespace URI_1001
{
    class Program
    {
        static void Main(string[] args)
        {
            int A, B;
            string val1 = Console.ReadLine();
            A = Convert.ToInt32(val1);
            string val2 = Console.ReadLine();
            B = Convert.ToInt32(val2);
            int c = A + B;
            Console.WriteLine($" X = {c}\n");
        }
    }
}
