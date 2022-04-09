#include <iostream>
using namespace std;
int main (){

    int numero;
    int resto;

    cout << "******************************************" << endl;
    cout << "***   INGRESE UN NÚMERO MAYOR A CERO   ***" << endl;
    cout << "******************************************" << endl;

    cout << "Ingrese el número: ";
    cin >> numero;

    if (numero > 0)
    {
        for (int i = 1; i <= numero; i=i+1)
        {
            resto = numero % i;
                if (resto == 0)
                {
                    cout << i << " ";
                }
                
        }
        
    }

    else if (numero == 0)
    {
        cout << "El número que ingresaste es " << numero << " es igual a CERO. Debe ser mayor";
    }
    
    else {
        cout << "El número " << numero << " no es mayor a cero."    ;
    }

    return 0;
}