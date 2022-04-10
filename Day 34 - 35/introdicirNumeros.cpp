#include <iostream>
using namespace std;
int main (){

    int valorIngresar, numero, numeroDos;

    cout << "*******************************************" << endl;
    cout << "***   CUANTOS VALORES VA A INTRODUCIR   ***" << endl;
    cout << "*******************************************" << endl;

    cout << "Cuantos valores vas ingresar: ";
    cin >> valorIngresar;

    if (valorIngresar > 0)
    {
        cout << "Vas ingresar " << valorIngresar << " números." << endl;
            cout << "Ingrese el primer número: ";
            cin >> numero;

                for (int i = 1; i < valorIngresar; i++)
                {
                    cout << "Ingrese un número mayor al primer número que es " << numero << ": ";
                    cin >> numeroDos;
                
                        if (numeroDos < numero )
                        {
                            cout << numeroDos << " no es mayor al primer número " << numero << endl;
                        }                    
            }
        cout << "Gracias por su colaboración.";
        
    }
    else {
        cout << "El número que ingrese es "<< numero << " debe ser mayoe a CERO.";
    }
    
    return 0;
}