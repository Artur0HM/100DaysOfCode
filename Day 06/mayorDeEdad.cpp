/*Escribe un programa que muestre si es mayor de edad o menor de edad para que pueda ingrasar al bar*/

#include <iostream>
using namespace std;
int main (){

    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad > 17)
    {
        cout << "Tu edad es " << edad << " años, eres MAYOR DE EDAD";
    }
    
    else
    {
        cout << "Tu edad es " << edad << " años, eres MENOR DE EDAD";
    }

    return 0;       
}