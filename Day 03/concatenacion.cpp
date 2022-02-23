/*Escribí un programa que solicite al usuario el ingreso de dos palabras, las cuales se guardarán en dos variables distintas. A continuación, almacená en una variable la concatenación de la primera palabra, más un espacio, más la segunda palabra. Mostrá este resultado en pantalla.
 */

#include <iostream>
#include <string>
using namespace std;
int main (){    
    
    string primeraPalabra;
    string segundaPalabra;

    cout << "Ingrese la primera palabra: ";
    cin >> primeraPalabra;

    cout << "Ingrese la segunda palabra: ";
    cin >> segundaPalabra;

    cout << primeraPalabra+" "+segundaPalabra;

    return 0;
}