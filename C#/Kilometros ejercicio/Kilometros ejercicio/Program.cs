using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Kilometros_ejercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese una cantidad en kilómetros: ");
            double km = Convert.ToDouble(Console.ReadLine());
            double mt = km * 1000;
            double yardas = mt * 1.09361;
            double varas = mt * 1.1969;

            Console.WriteLine("\nLa cantidad en metros es: " + mt);
            Console.WriteLine("La cantidad en yardas es: " + yardas);
            Console.WriteLine("La cantidad en varas es: " + varas);
            Console.ReadKey();
        }
    }
}
