/*Escribe un programa que pregunte al usuario si es culpable o no. Asumiremos que:

En caso afirmativo el usuario responderá si
En caso contrario responderá no.
Si el usuario responde si se escribirá por el documento «irás a la cárcel».

Si el usuario responde no se escribirá por el documento web «irás a casa».

En cualquier caso en el documento web se escribirá «la documentación por favor».*/


#include <iostream>
using namespace std;
int main (){

    string respuesta;

    cout << "Eres culpable SI - NO: ";
    cin >> respuesta;

    if (respuesta == "si" || respuesta == "SI")
    {
        cout << "Tu respuesta fue" << " '"<<respuesta<< "' " << "irás a la carcel, la documentación por favor.";
    }
    else if (respuesta == "no" || respuesta == "NO")
    {
        cout << "Tu respuesta fue" << " '" << respuesta << "' " << "irás a casa, la documentación por favor.";
    }
    else
    {
        cout << "ERROR. TU RESPUESTA DEBE SER (SI - NO)";
    }
    
    return 0;
}