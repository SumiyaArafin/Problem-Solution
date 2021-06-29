using System;

namespace _1004
{
    class Program
    {
        static void Main(string[] args)
        {
           
            double  pi = 3.14159;
            double R = Convert.ToInt32(Console.ReadLine());
            
            Console.WriteLine($"VOLUME = {((4/3.0)*pi*(R*R*R)).ToString("0.000")}");
            Console.ReadKey();

        }
    }
}
