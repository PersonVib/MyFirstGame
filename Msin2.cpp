using System;
using System.Linq;

class Program
{
    static void Main()
    {
        Random random = new Random();
        int[] numbers = Enumerable.Range(0, 15000).Select(i => random.Next(1, 1000)).Select(x => x * x).ToArray();
        int maxNumber = numbers.Max();

        Console.WriteLine("Максимальное число: " + maxNumber);
    }
}
