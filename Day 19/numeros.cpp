/*Es nulo*/

#include <iostream>
using namespace std;
int main (){
    
    float numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "El número  " << numero << " es positivo."; 
    }
    
    else if (numero < 0)
    {
        cout << "El número " << numero << " es negativo.";
    }
    else
    {
        cout << "el número " << numero << " es nulo.";
    }

    return 0;
}