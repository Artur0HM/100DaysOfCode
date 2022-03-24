/*Desarrolle un algoritmo que permita leer tres valores y almacenarlos en las variables A, B y C respectivamente. El algoritmo debe imprimir cual es el mayor y cual es el menor. Recuerde constatar que los tres valores introducidos por el teclado sean valores distintos. Presente un mensaje de alerta en caso de que se detecte la introducción de valores iguales*/

#include <iostream>
using namespace std;
int main (){

    int primerNumero;
    int segundoNumero;
    int tercerNumero;

    cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    cout << "Ingrese el tercer número: ";
    cin >> tercerNumero;

    if (primerNumero > segundoNumero && primerNumero > segundoNumero)
    {
        cout << "EL primer número es mayor: " << primerNumero;
    }

    else if (segundoNumero > primerNumero && segundoNumero > tercerNumero)
    {
        cout << "El segundo número es el mayor: " << segundoNumero;
    }

    else if (segundoNumero == primerNumero && segundoNumero == tercerNumero)
    {
        cout << "El primer número es: " << primerNumero << " el segundo número es: " << segundoNumero << " el tercer número es: " << tercerNumero << " Los tres números son iguales";
    }

    else
    {
        cout << "El tercer número es el mayor: " << tercerNumero;
    }

    return 0;
}