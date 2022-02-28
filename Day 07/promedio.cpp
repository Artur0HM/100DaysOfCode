/*Notas ingrese tres notas*/ 

#include <iostream>
using namespace std;

int main (){
    float primerNota, segundaNota, tercertaNota, promedioFinal;

    cout << "Ingrese la primera nota: ";
    cin >> primerNota;

    cout << "Ingrese la segunda nota: ";
    cin >> segundaNota;

    cout << "Ingrese la tercera nota: ";
    cin >> tercertaNota;

    promedioFinal = (primerNota + segundaNota + tercertaNota)  / 3;
    

    if (promedioFinal < 6 )
    {
        cout << "Tú promedio final es: " << promedioFinal << " muy deficiente.";
    }

    else if (promedioFinal >= 6 && promedioFinal <=8)
    {
        cout << "Tú promedio final es: " << promedioFinal << " Insuficiente.";
    }

    else if (promedioFinal >= 9 && promedioFinal <= 12 )
    {
        cout << "Tú promedio final es: " << promedioFinal << " Regular.";
    }

    else if (promedioFinal >= 13 && promedioFinal <= 15)
    {
        cout << "Tú promedio final es: " << promedioFinal << " Bien.";
    }

    else if (promedioFinal >= 16 && promedioFinal <= 17)
    {
        cout << "Tú promedio final es: " << promedioFinal << " Notable.";
    }

    else
    {
        cout << "Tú promedio final es: " << promedioFinal << " Sobresaliente.";
    }

    return 0;
}