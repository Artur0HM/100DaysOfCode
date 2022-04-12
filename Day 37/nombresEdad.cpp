#include <iostream>
using namespace std;
int main () {

    int integrantes;
    char nombres[50];
    char pais [15];
    int edad;

    cout << "Cuantos integrantes van a participar: ";
    cin >> integrantes;

        if (integrantes > 0)
        {
            cout << "Vas ingrsar " << integrantes << " participantes" << endl;

                for (int i = 1; i <= integrantes; i++)
                {
                    cout << "Ingresa el nombre: ";
                    cin >> nombres;

                    cout << "Tu nombres es: " << i << endl;


                }

                
        }

        else {
            cout << "Debes ingresar un número mayor a CERO.";
        }
        

    
    /*POR FINALIZAR*/


    return 0;

}
