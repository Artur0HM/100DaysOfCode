/*Hacer un programa en C++ para una tienda de helado da un descuento por compra a sus clientes con membresía dependiendo de su tipo, sólo existen tres tipos de membresía, tipo A, tipo B y tipo C. Los descuentos son los siguientes:

Tipo A 10% de descuento
Tipo B 15% de descuento
Tipo C 20% de descuento*/

#include <iostream>
using namespace std;

int main (){

    char tipoDeMembresia;

    char primerMembresia = 'a';
    int descuentoMembresia_A = 10;
    
    char segundaMembresia = 'b';
    int descuentoMembresia_B = 15;

    int terceraMembresia = 'c';
    int descuentMembresia_C = 20;

    int helado;
    int cantidad;
    int precio = 20;

    cout << " Que membresia tienes (a - b - c): ";
    cin >> tipoDeMembresia;

    if (tipoDeMembresia == primerMembresia)
    {
        cout << "Que sabor de helado vas a desear (fresa - chocolate - lucuma): ";
        cin >> helado;

        cout << " Cuantos helados vas a comprar: " << endl;
        cin >> cantidad;

        cout << "TU membresea es " << tipoDeMembresia << " tienes un descuento del " << descuentoMembresia_A << "%" << " el sabor que elegiste es" << helado << " total a pagar es de: " << (cantidad *  precio) - (descuentoMembresia_B * (cantidad * precio) / 100) ;


    }
    



    return 0;
}