#include <iostream>
#include <math.h>
using namespace std;
int main (){

    int numero, numeroSuma, suma, x;

    cout << "********************************************" << endl;
    cout << "*****   SUMA VALORES VAS A INGRESAR   ******" << endl;
    cout << "********************************************" << endl;

    cout << "Cuantos valores vas a ingresar: ";
    cin >> numero;
    cout << "VAS A INGRESAR " << numero << " NÚMEROS, PARA SUMAR." << endl;

        if (numero > 0)
        {
            for (int i = 1; i <= numero; i++)
            {
                cout << "Ingrese el " << i << " número: ";
                cin >> numeroSuma;     

            }

        }
        else {
            cout << "Debes ingresar un número mayor a CERO.";
        }
    return 0;
}