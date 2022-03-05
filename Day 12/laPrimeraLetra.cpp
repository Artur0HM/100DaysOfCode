/*Solicitar al usuario que ingrese los nombres de dos personas, los cuales se almacenarán en dos variables. A continuación, imprimir “coincidencia” si los nombres de ambas personas comienzan con la misma letra ó si terminan con la misma letra. Si no es así, imprimir “no hay coincidencia”.*/

#include <iostream>
using namespace std;
int main (){

    char primerNombre[30]; 
    char segundoNombre[30];

    cout << "Ingrese el primer nombre: ";
    cin >> primerNombre;

    cout << "Ingrese el segundo nombre: ";
    cin >> segundoNombre;

    if (primerNombre[0] == segundoNombre[0])
    {
        cout << "El primer nombre es " << primerNombre << " su nombre inicia con [" << primerNombre[0] << "], el segundo nombre es " << segundoNombre << " su nombre inicia con [" << segundoNombre[0] << "]" << endl; 
        cout << " LOS NOMBRES COMIENZAN CON LA MISMA LETRA." ;
    }
    
    return 0;
}