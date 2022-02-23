/*Escribí un programa que solicite al usuario dos números y los almacene en dos variables. En otra variable, almacená el resultado de la suma de esos dos números y luego mostrá ese resultado en pantalla. A continuación, el programa debe solicitar al usuario que ingrese un tercer número, el cual se debe almacenar en una nueva variable. Por último, mostrá en pantalla el resultado de la multiplicación de este nuevo número por el resultado de la suma anterior.*/

#include <iostream>
using namespace std;

int main (){

    double numero_uno;
    double numero_dos;
    int resultado;
    double numero_tres;

    cout << "Ingrese el primer número: ";
    cin >> numero_uno;

    cout << "Ingrese el segundo número: ";
    cin >> numero_dos;

    resultado = numero_uno + numero_dos;

    cout << "La suma es: " << resultado << endl;

    cout << "Ingrese un tercer número: ";
    cin >> numero_tres;

    cout << "La multiplicación de la suma con el último número: " << resultado * numero_tres;


    return 0;
}
