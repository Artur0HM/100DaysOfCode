/*Diseñe un programa que ingrese un número entero positivo que no tenga más de 4 cifras y lo imprima completando con ceros por la izquierda de tal manera que siempre se ve con 4 cifras. Por ejemplo, si l número ingresado fuera 18, el resultado deberá ser 0018. Si el número ingresado no fuera correcto debe imprimir un mensaje de error.*/

#include <iostream>
using namespace std;
int main(){

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero >= 0 && numero <= 9)
    {
        cout << " El número ingresado es " << " 000"  << numero;

    }
    else if (numero >= 10 && numero <= 99)
    {
        cout << " El número ingresado es " << " 00"  << numero;
    }
    else if (numero >= 100 && numero <= 999)
    {
        cout << " El número ingresado es " << " 0"  << numero;
    }
    else if (numero >= 1000 && numero <= 9999)
    {
        cout << " El número ingresado es " << numero;
    }
    else
    {
        cout << "ERROR. Debes ingresas uns cifra de 4 números.";
    }
    
    return 0;
}