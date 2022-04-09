#include <iostream>
using namespace std;
int main (){

    int numero;

    cout << "*******************************************" << endl;
    cout << "***   CUANTOS VALORES VA A INTRODUCIR   ***" << endl;
    cout << "*******************************************" << endl;

    cout << "Cuantos valores vas ingresar: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "Vas ingresar " << numero << " números." << endl;

        cout << "Ingrese el primer número: ";
        cin >> numero;

            for (int i = numero; i <= numero; i++)
            {
                cout << "Ingrese un número mayor a: ";
                cin >> numero;
                
                    
            }
            
    }
    else {
        cout << "El número que ingrese debe ser mayoe a CERO.";
    }
    

    return 0;
}