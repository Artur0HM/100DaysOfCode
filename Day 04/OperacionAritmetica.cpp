/*Escribir un programa que muestre por pantalla el resultado de la siguiente operación aritmética ((a+b)/(c*d)) ° 2
.*/

#include <iostream>
#include <math.h>
using namespace std;
int main (){

    float a, b, c, d;
    

    cout << "OPERACION ARITMETICA" <<endl;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    cout << "Ingrese el tercer número: ";
    cin >> c;

    cout << "Ingrese el cuarto número: ";
    cin >> d;

    cout << " El resultado es: " << pow((a+b)/(c*d),2);
    return 0;
}