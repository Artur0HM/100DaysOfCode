/*Escribir un programa que, dado un número entero, muestre su valor absoluto. Nota: para los números positivos su valor absoluto es igual al número (el valor absoluto de 52 es 52), mientras que, para los negativos, su valor absoluto es el número multiplicado por -1 (el valor absoluto de -52 es 52).*/

#include <iostream>
using namespace std;

int main (){
    
    int numeroAbsoluto;
    int total;

    cout << "Ingrese un número: ";
    cin >> numeroAbsoluto;

    if (numeroAbsoluto > 0 )
    {
        cout << "El número es: " << numeroAbsoluto;
    }
    else
    {
        total = numeroAbsoluto * -1;
        cout << "El número es: " << total;
    }



    return 0;
}