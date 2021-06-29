using System;

namespace URI_1002
{
    class Program
    {
        static void Main(string[] args)
        {
            double n = 3.14159;
            string val = Console.ReadLine();
            double R = Convert.ToDouble(val);
            double result = n * R * R;
            
            Console.WriteLine("A="+ result.ToString("0.0000"));
            Console.ReadKey();
        }
    }
}
