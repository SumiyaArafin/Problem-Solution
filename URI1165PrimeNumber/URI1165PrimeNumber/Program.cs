using System;

namespace URI1165PrimeNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            int n= Convert.ToInt32(Console.ReadLine()) ;

            for(int j = 0; j<n; j++)
            {
                
                int m = Convert.ToInt32(Console.ReadLine());
                int flag = 0;
                for (int i = 2; i < m; i++)
                {

                    if (m % i == 0)
                    {
                        flag = 1;
                    }

                }
                if (flag == 0)
                {
                    Console.WriteLine($"{m} eh primo");
                }
                else
                {
                    Console.WriteLine($"{m} nao eh primo");
                }
            }



          
         
        }
    }
}
