/*Desarrolle el código fuente de un programa que permita ingresar una edad y leer su edad ingresada*/

#include <iostream>
using namespace std;
int main (){

    int edad;
    
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad > 17)
    {
        cout << "Tu edad es " << edad << " eres mayor de edad   ";
    }

    else
    {
        cout << "Tu edad es " << edad << " eres menor de edad.  ";
    }
    


    return 0;
}