/*Escribir un programa para una empresa que tiene salas de juegos para todas las edades y quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar 5€ y si es mayor de 18 años, 10€.*/

#include <iostream>
using namespace std;
int main (){
    
    int edad;
    int precioUno = 5;
    int precioDos = 10;

    cout << "INGRESE SU EDAD PARA SABER CUANTO DEBE PAGAR: ";
    cin >> edad;

    if (edad < 4)
    {
        cout << "Tienes " << edad << " años, la entrada es gratis";
    }
    else if (edad >= 4 && edad <= 18)
    {
        cout << "Tienes " << edad << " años, deberas pagar: " << precioUno << " dolares.    ";
    }
    else if (edad >= 18)
    {
        cout << "Tienes " << edad << " años, deberas pagar: " << precioDos << " dolares.    ";
    }
    else
    {
        cout << "ERROR, DEBES INGRESARUNA EDAD.";
    }
        
    
    
    return 0;
}