using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Promedio_ejercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese el nombre del vendedor: ");
            string nombre = Console.ReadLine();
            Console.Write("Ingrese el apellido del vendedor: ");
            string apellido = Console.ReadLine();
            double[] ventas = new double[5];
            double sumaVentas = 0;
            double promedioVentas;

            for (int i = 0; i < 5; i++)
            {
                Console.Write("Ingrese las ventas del mes " + (i + 1) + ": ");
                ventas[i] = Convert.ToDouble(Console.ReadLine());
                sumaVentas += ventas[i];
            }

            promedioVentas = sumaVentas / 5;

            Console.WriteLine("\nEl promedio de ventas del vendedor " + nombre + " " + apellido + " es: " + promedioVentas);
            Console.ReadKey();
        }
    }
}
