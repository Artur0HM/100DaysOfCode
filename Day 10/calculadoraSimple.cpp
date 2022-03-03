/*Escribir un programa que simule un calculador simple. Lee dos enteros y un carácter. Si el carácter es un +, se imprime la suma; si es un -, se imprime la diferencia; si es un *, se imprime el producto; si es un /, se imprime el cociente.*/

#include <iostream>
using namespace std;
int main (){
    
    float primerNumero;
    float segundoNumero;
    string simbolo;
    float total;

    cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    cout << "Ingrese el que desea hacer. (+, -, *, /): ";
    cin >> simbolo;

    if (simbolo == "+")
    {
        cout << "ESCOGISTE SUMAR" << endl;
        total = primerNumero + segundoNumero;
        cout  << "La suma es: " << total;
    }
    
    else if (simbolo == "-")
    {
        cout << "ESCOGISTE RESTAR" << endl;
        total = primerNumero - segundoNumero;
        cout << "La resta es: " << total;
    }
    
    else if (simbolo == "*")
    {
        cout << "ESCOGISTE MULTIPLICAR" << endl;
        total = primerNumero * segundoNumero;
        cout << "La multiplicación es: " << total;
    }

    else if (simbolo == "/")
    {
        cout << "ESCOGISTE DIVIDIR" << endl;
        total = primerNumero / segundoNumero;
        cout << "La división es: " << total;
    }
    
    else{
        cout << "ERROR, DEBES ESCOGER ALGUNO DE ESTOS SIMBOLOS (+, -, *, /).";
    }
    
    return 0;
}