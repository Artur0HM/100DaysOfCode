/* Hallar A+B-C+100.*/

#include <iostream>
using namespace std;
int main (){    

    float a;
    float b;
    float c;

    cout << "Ingrese un número para A: ";
    cin >> a;
    cout << "Ingrese un número para B: ";
    cin >> b;
    cout << "Ingrese un número para C: ";
    cin >> c;

    cout << "El resultado es: " << ((a+b-c) + 100);

    return 0;
}