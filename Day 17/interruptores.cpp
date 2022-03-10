/*En un circuito eléctrico hay tres interruptores, los cuales pueden estar en estado cerrado(1) o abierto(0).
interruptores
Para que un equipo funcione, se requiere que al menos dos estén cerrados. Si los datos son el estado de los interruptores, determine si el equipo funcionará.*/

#include <iostream>
using namespace std;
int main (){

    int interruptorUno;
    int interruptorDos;
    int interruptortres;

    cout << "SOLO PUEDES USAR CERRADO (1) - ABIERTO (2)" << endl;
    cout << "El primer interruptor esta cerrado (1) o esta abierto (0): ";
    cin >> interruptorUno;

    cout << "El segundo interruptor esta cerrado (1) o esta abierto (0): ";
    cin >> interruptorDos;

    cout << "El tercero interruptor esta cerrado (1) o esta abierto (0): ";
    cin >> interruptortres;

    if (interruptorUno == interruptorDos && interruptorUno == interruptortres && interruptorDos == interruptortres)
    {
        cout << "NO FUNCIONA   ";
    }
    else if (interruptorUno == interruptorDos && interruptorUno == interruptortres && interruptorDos != interruptortres)
    {
        cout << "SI FUNCIONA";
    }
    


    return 0;
}