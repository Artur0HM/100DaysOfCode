/*Escribí un programa que solicite al usuario un número y le reste el 15%, almacenando todo en una única variable. A continuación, mostrar el resultado final en pantalla. -->MI MODFICACION DEL PROBLEMA SERA QUE VAMOS A INGRESAR EL PORCENTAJE DE DESCUENTO<--*/

#include <iostream>
using namespace std;

int main (){
    int precio;
    int descuento;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "Ingrese que porcentaje sera el descuento: ";
    cin >> descuento;

    cout << " Descuento es de " << descuento << "% queda: " << (precio - (descuento * precio) / 100);

    return 0;
}