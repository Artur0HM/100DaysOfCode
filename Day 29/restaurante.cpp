/*Un restaurante ofrece un descuento del 5% de descuento para consumos de hasta 50 soles, un descuento del 12% para consumos mayores y para ambos casos se aplica el impuesto del 18%. Determinar el monto a pagar por lo consumido, mostrar todos los importes.*/

#include <iostream>
using namespace std;
int main (){

    int consumo;
    int primerDescuento = 5;
    int segundoDescuento = 12;
    const int IGV = 18;
    int descuento;
    float total;

    cout << "Ingrese la cantidad que comsumio: ";
    cin >> consumo;

    if (consumo > 50)
    {
        descuento = (consumo + (IGV * consumo) / 100);
        total = (descuento - (primerDescuento * descuento) / 100);
        cout << "Total a pagar: " << total;
    }
    else
    {
        descuento = (consumo + (IGV * consumo) / 100);
        total = (descuento - (segundoDescuento * descuento) / 100);
        cout << "Total a pagar: " << descuento;
    }

    return 0;
}