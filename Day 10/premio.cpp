/*Solicitar al usuario un número de cliente. Si el número es el 1000, imprimir "Ganaste un premio".*/

#include <iostream>
using namespace std;

int main (){
    int numeroDeCliente;
    int premio;

    cout << "Ingrese que número de cliente eres: ";
    cin >> numeroDeCliente;

    if (numeroDeCliente == 1000)
    {
        cout << "GANASTE UN PREMIO - ESCOGE ENTRE ESTOS TRES PREMIOS." << endl;
        cout << "1. Celular." << endl;
        cout << "2. Laptop." << endl;
        cout << "3. Televisor de 65'." << endl ;
        cout << "Escoge un número (1 - 2 - 3): ";
        cin >> premio;

        if (premio == 1)
        {
            cout << "Elegiste como premio un celular.";
        }
        else if (premio == 2)
        {
            cout << "Elegiste como premio una laptop.";
        }
        else if (premio == 3)
        {
            cout << "Elegiste como premio un televisor.";
        }
        else
        {
            cout << "DEBES ESCOGER UN NÚMERO";
        }
        
    }

    else
    {
        cout << "No ganaste nada.";
    }
    
}