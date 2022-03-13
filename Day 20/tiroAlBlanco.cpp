/*Una Olimpiada de tiro al blanco se llega a un acuerdo entre los participantes para que el puntaje obtenido sea calculado en base al puntaje original ( 0 a 10 ) alcanzando en el tiro efectuado, multiplicado por un factor según la siguiente tabla:
puntaje = (0) - (1-5) - (6-8) - (9-10)
factor = (0) - (6) - (9) - (10)
*/ 

#include <iostream>
using namespace std;
int main (){

    int puntaje;
    int factorUno = 0;
    int factorDos = 6;
    int factorTres = 9;
    int factorCuatro = 10;
    int total;

    cout << "Ingrese el puntaje que realizo: ";
    cin >> puntaje;

    if (puntaje == 0)
    {
        total = puntaje * factorUno;
        cout << "Usted realizo " << total << " puntos.  ";
    }
    else if (puntaje >= 1 && puntaje <=5)
    {
        total = puntaje * factorDos;
        cout << "Usted realizo " << total << " puntos.  ";
    }
    else if (puntaje >= 6 && puntaje <=8)
    {
        total = puntaje * factorTres;
        cout << "Usted realizo " << total << " puntos.  ";
    }
    else if (puntaje >=9 && puntaje <= 10)
    {
        total = puntaje * factorCuatro;
        cout << "Usted realizo " << total << " puntos.  ";
    }
    else
    {
        cout << "ERROR. INGRESE UN PUNTAJE ENTRE 0 - 10";
    }
    
    return 0;
}