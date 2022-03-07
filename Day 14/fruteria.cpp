/*Una frutería ofrece las manzanas con descuento según la siguiente tabla:

Numero de kilos comprados	% Descuento
0 – 2	0%
2.01 – 5	10%
5.01 – 10	15 %
10.01 en adelante	20%
Dado el precio por kilo, y el peso, determinar cuánto pagará una persona que compre manzanas es esa frutería. */

#include <iostream>
using namespace std;
int main (){

    float kilos;
    int precio = 2;
    float total;
    int primerDescuento = 10;
    int segundoDescuento = 15;
    int tercerDescuento = 20;

    cout << "Igrese cuantos kilogramos compro de manzana: ";
    cin >> kilos;

    if (kilos >= 2.01 && kilos <= 5)
    {
        total = kilos * precio;
        cout << "Compraste " << kilos << " kilos, te corresponde un descuento de " << primerDescuento << "%" << ". En total deberas pagar: " << (total - (primerDescuento * total) / 100) << " dolares.";
    }
    
    else if (kilos >= 5.01 && kilos <= 10)
    {
        total = kilos * precio;
        cout << "COmpraste " << kilos << " kilos, te corresponde un descuento de " << segundoDescuento << "%" << ". En total deberas pagar: " << (total - (segundoDescuento * total) / 100) << " dolares";
    }

    else if (kilos >= 10.01)
    {
        total = kilos * precio;
        cout << "COmpraste " << kilos << " kilos, te corresponde un descuento de " << tercerDescuento << "%" << ". En total deberas pagar: " << (total - (tercerDescuento * total) / 100) << " dolares";
    }
    
    else
    {
        cout << "ERROR, INTENTE OTRA VEZ.";
    }







    return 0;
}

