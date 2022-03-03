/*Escribir un programa que solicite el ingreso de la temperatura en grados, si la temperatura está por encima de 100 grados desplegar el mensaje “arriba del punto de ebullición del agua”, de lo contrario desplegar el mensaje “abajo del punto de ebullición del agua”.*/

#include <iostream>
using namespace std;
int main (){
    
    int temperatura;

    cout << " Ingresa la temperatura: ";
    cin >> temperatura;

    if (temperatura >= 100)
    {
        cout << "Arriba del punto de ebullición del agua.";
    }
    else
    {
        cout << "Abajo del punto de ebullicón del agua.";
    }

    return 0;
}