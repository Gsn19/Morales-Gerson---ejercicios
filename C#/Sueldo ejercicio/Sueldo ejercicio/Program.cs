using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sueldo_ejercicio
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese el sueldo base del empleado: ");
            double sueldoBase = Convert.ToDouble(Console.ReadLine());
            double renta = 0.10 * sueldoBase;
            double afp = 0.07 * sueldoBase;
            double seguroSocial = 0.05 * sueldoBase;
            double sueldoNeto;

            if (sueldoBase < 3300)
            {
                Console.WriteLine("\nEl sueldo base ingresado es menor a 3300. No se aplican descuentos.");
                sueldoNeto = sueldoBase;
            }
            else
            {
                sueldoNeto = sueldoBase - renta - afp - seguroSocial;
                Console.WriteLine("\nEl sueldo neto del empleado es: " + sueldoNeto + "\nSueldo Base> " + sueldoBase + "\nRenta: " + renta + "\nAFP: " + afp + "\nSeguro Social: " + seguroSocial);
            }
            Console.ReadKey();

        }
    }
}
