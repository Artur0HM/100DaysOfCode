/*Escribir un programa que pregunte el nombre del usuario en la consola y un número entero e imprima por pantalla en líneas distintas el nombre del usuario tantas veces como el número introducido.*/

#include <iostream>
using namespace std;
int main (){

    int numero;
    char nombre [100];

    cout << "Ingrese su nombre: ";
    cin.getline(nombre,100);

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        cout << "Tu nombre es: " << nombre << endl;
    }
    
    return 0;
}