#include<iostream>
using namespace std; 
#include<string> //Incluir la librería para usar string

//Los tipos de datos string pueden guardar una cadena de caracteres (letras, numeros, simbolos...) 

void saludar(string nombre)
{
    cout<<"Hola, "<<nombre<<" !!" <<endl;
    //Utilizamos endl para generar un salto de linea
}

void main(){
    saludar("Gonzalo"); //Llamo a la rutina saludar con nombre=Gonzalo
    saludar("Julieta"); //Llamo a la rutina saludar con nombre=Julieta

    system("pause");
}