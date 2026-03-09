using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter a positive integer: ");
        int num = int.Parse(Console.ReadLine());
        long factorial = 1;

        if (num < 0)
        {
            Console.WriteLine("Factorial of a negative number doesn't exist.");
        }
        else
        {
            for (int i = 1; i <= num; i++)
            {
                factorial *= i;
            }
            Console.WriteLine($"Factorial of {num} is {factorial}");
        }
    }
}