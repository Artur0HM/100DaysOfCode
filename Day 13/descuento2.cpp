/*En un almacén se descuenta 20% del precio al cliente si el valor a pagarse es mayor a $200. Dado un valor de precio, muestre lo que debe pagar el cliente.*/

#include <iostream>
using namespace std;

int main (){

    int precio;
    const int descuento = 20;
    int total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    if (precio > 200)
    {
        total = (precio - (descuento * precio) / 100);
        cout << "Tu compra es de " << precio << " dolares tienes un descuemto del " << descuento << "%. En total debes pagar: " << total << " dolares.";
    }

    else
    {
        cout << "Tu compra es de " << precio << " dolares.";
    }
    


    return 0;
}