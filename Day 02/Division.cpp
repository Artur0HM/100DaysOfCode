#include <iostream>
using namespace std;

int main(){
    int numero_uno, numero_dos, resultado;

    cout << "LA DIVISIÓN ES." <<endl;

    cout << "Ingrese el primero número: ";
    cin >> numero_uno;

    cout << "Ingrese el segundo número: ";
    cin >> numero_dos;

    resultado = numero_uno / numero_dos;

    cout << "La división es: " << resultado;

    return 0;
}