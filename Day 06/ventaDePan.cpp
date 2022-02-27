/*Una panadería vende barras de pan a 3.49€ cada una. El pan que no es el día tiene un descuento del 60%. Escribir un programa que comience leyendo el número de barras vendidas que no son del día. Después el programa debe mostrar el precio habitual de una barra de pan, el descuento que se le hace por no ser fresca y el coste final total.*/

#include <iostream>
using namespace std;

int main (){

    string pan;
    int panesComprados;
    int descuento = 60;
    float total;
    const float costoDelPan = 3.49;

    cout << "Ingrese de cuando es el pan (hoy - ayer): ";
    cin >> pan;

    if (pan == "hoy" || pan == "HOY")
    {
        cout << " Cuantos panes compro de hoy: ";
        cin >> panesComprados;
        total = panesComprados * costoDelPan;

        cout << "Panes del dia, en total compro " << panesComprados << " el precio es de: " << total;



    }
    
    else if (pan == "ayer" || pan == "AYER")
    {
        cout << " Cuantos panes compro de ayer: ";
        cin >> panesComprados;
        total = panesComprados * costoDelPan;

        cout << " Usted compro barras de pan de ayer: " << panesComprados << endl;
        cout << " El precio habitual de la barra de pan es de : " << costoDelPan << " dolares" << endl;
        cout << " El descuento es del " << descuento << "%" << endl;
        cout << " El conste total es de: " << (total - (descuento * total) / 100);


    }
    


    return 0;
}