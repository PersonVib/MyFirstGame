using System;

class Program
{
    static void Main()
    {
        string[] vegetables = { "картофель", "морковь", "лук", "помидор", "огурец" };

        Console.WriteLine("Исходный массив овощей:");
        foreach (string veggie in vegetables)
        {
            Console.Write(veggie + " ");
        }

        Array.Reverse(vegetables);

        Console.WriteLine("\nПеревернутый массив овощей:");
        foreach (string veggie in vegetables)
        {
            Console.Write(veggie + " ");
        }
    }
}
