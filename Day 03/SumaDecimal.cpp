#include <iostream>
using namespace std;

int main(){

    double numero_uno;
    int numero_dos;
    double resultado;

    cout << "Ingrese un número decimal: ";
    cin >> numero_uno;

    cout << "Ingrese un número entero: ";
    cin >> numero_dos;

    resultado = numero_uno + numero_dos;

    cout << "Primer número: " << numero_uno << endl;
    cout << "Segundo número: " << numero_dos << endl;
    cout << "El resultado de la suma es: " << resultado;

    return 0;
}