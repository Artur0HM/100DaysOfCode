/*Para tributar un determinado impuesto se debe ser mayor de 16 años y tener unos ingresos iguales o superiores a 1000 € mensuales. Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y muestre por pantalla si el usuario tiene que tributar o no.*/

#include <iostream>
using namespace std;
int main (){
    
    int edad;
    float impuestos;

    cout << "Cuantos años tienes: ";
    cin >> edad;

    if (edad >= 16)
    {
        cout << "Tu ingreso mensual de cuanto es: ";
        cin >> impuestos;

        if (impuestos >= 1000)
        {
            cout << "Tienes " << edad << " años " << "tu ingreso mensual es de: " << impuestos << " dolares, pagaras impuestos  ";
        }
        else
        {
            cout << "Tienes " << edad << " años, tu ingreso mensual es de: " << impuestos << " dolares es menor a 1000 doalres, no te corresponde pagar impuestos.    ";
        }
    }
    else {
        cout << "Tienes " << edad << " años, no pagaras impuestos hasta los 16 años.    ";
    }
    
    return 0;
}