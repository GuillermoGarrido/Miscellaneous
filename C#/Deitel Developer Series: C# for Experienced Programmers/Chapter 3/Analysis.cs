

using System;


   
    class Analysis
    {
        static void Main(string[] args)
        {
            int passes = 0;
            int failures = 0;
            int students = 0;
            int result;

            while (students <= 9)
            {
                Console.Write("Enter result (1 = pass, 2 = fail): ");
                result = Int32.Parse(Console.ReadLine());

                if (result == 1)
                {
                    passes++;
                }
                else
                {
                    failures++;
                }
                students++;
            }
            Console.WriteLine();
            Console.WriteLine("Passed: " + passes);
            Console.WriteLine("Failed: " + failures);

            if (passes > 8)
            {
                Console.Write("Give teacher a raise\n");
            }
            else if (passes < 2)
            {
                Console.Write("Replace teacher\n");
            }
        }
    }
