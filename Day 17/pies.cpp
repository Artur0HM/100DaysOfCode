/*Dada una cantidad expresada en pies, y otra en metros. Determinar la suma pero convertida a pulgadas, a yardas, a metros y a millas por separado. Considere las siguientes equivalencias:

1 milla = 1609 metros, 1 pulgada = 0.0254 metros, 1 yarda = 3 pies, 1 pie = 12 pulgadas.*/

#include <iostream>
using namespace std;
int main (){

    int medidaPies;
    float totalMetros;
    int medidaMetros;
    int milla = 1609;
    float pulgada = 0.0254;
    int yarda = 3;
    int pie = 12;

    cout << "Ingrese una medida en pies: ";
    cin >> medidaPies;

    cout << "Ingrese una cantidad en metros: ";
    cin >> medidaMetros;

    totalMetros = ((medidaPies * pie) * pulgada) + medidaMetros;

    cout << "La suma de la medida en pies y la medida en metros es: " << totalMetros << " kilometros" << endl;
    cout << "";




    return 0;
}