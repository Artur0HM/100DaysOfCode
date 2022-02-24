/*Escribí un programa que le solicite al usuario ingresar una fecha formada por 8 números, donde los primeros dos representan el día, los siguientes dos el mes y los últimos cuatro el año (DDMMAAAA). Este dato debe guardarse en una variable con tipo int (número entero). Finalmente, mostrar al usuario la fecha con el formato DD / MM / AAAA.*/

#include <iostream>

using namespace std;

int main (){

    int dia;
    int mes;
    int año;

    cout << "Ingrese dia: ";
    cin >> dia;

    cout << "Ingrese mes: ";
    cin >> mes;

    cout << "Ingrese año: ";
    cin >> año;

    cout << "Fecha de formato DDMMAAAA: " << dia << mes << año << endl;

    cout << dia << " / " << mes << " / " << año;


    return 0;
}