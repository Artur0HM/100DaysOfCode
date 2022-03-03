/*Solicitar al usuario que ingrese dos números y mostrar cuál de los dos es menor. No considerar el caso en que ambos números son iguales.*/

#include <iostream>
using namespace std;
int main() {    

    int primerNumero;
    int segundoNumero;

    cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    if (primerNumero < segundoNumero)
    {
        cout << "El primer número es " << primerNumero << " es menor que el segundo número " << segundoNumero;
    } 
    else if (segundoNumero < primerNumero)
    {
        cout << "El segundo número es " << segundoNumero << " es menor que el primer número " << primerNumero;
    }
    else
    {
        cout << "ERROR DEBES DE INGRESAR UN NÚMERO";
    }
    
    return 0;
}
