/*Escribir un programa que lea un entero positivo, n, introducido por el usuario y después muestre en pantalla la suma de todos los enteros desde 1 hasta n. La suma de los n primeros enteros positivos puede ser calculada de la siguiente forma: suma = n (n + 1) / 2 */

#include <iostream>
using namespace std;

int main (){
    
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "El resultado de los primeros números enteros desde 1 hasta " << numero << " es " << (numero * (numero + 1 ) / 2);
    
    
    
    return 0;
}