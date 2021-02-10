# Taller de Programación 1
Repositorio de la materia Taller de Programación, correspondiente al tercer año de la orientación Informática.

Cada uno de los contenidos que se ven durante la materia estará documentado en un proyecto, en donde podrás ver ejemplos prácticos de su aplicación.

## Ejecución

Para correr cualquier proyecto de los que figuran en este repositorio basta con abrir su archivo de solución ***.sln*** y luego ejecutarlo dentro del Visual Studio (Community 2019). 

El código del programa principal de cada proyecto se encuentra en su correspondiente archivo ***Program.cs***

## Descripción de los proyectos

### 00 - Hola Mundo
En este proyecto podrás ver cómo realizar el típico Hello World en C#

```c#
class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hello World!");
    }
}
```

### 01 - Introducción a Funciones
Una pequeña demostración de cómo definir una función "Saludar" y llamarla, enviando como parámetro, dos valores diferentes para la variable de tipo string "nombre"

```c#
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
```