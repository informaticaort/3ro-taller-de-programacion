using System;

namespace _01_IntroFunciones
{
    class Program

    {
        static void Main(string[] args)
        {
            Saludar("Raquel");
            Saludar("Pamela");
        }

        static void Saludar(string nombre)
        {
            Console.WriteLine("Hola, " + nombre);
        }
    }
}
