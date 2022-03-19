/*Cuenta Bancaria*/

#include <iostream>
using namespace std;
int main (){

    int edad;
    char nacinalidad;
    int DNI;
    char documentoDeIdentidad;
    char nombres [20];
    char apellidos [20];
    char direccion [20];

    cout << "Que edad tienes: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "1. PERUANO." << endl;
        cout << "2. EXTRANJERO." << endl << endl;
        cout << "Cual es tu naconalidad (1 - 2): ";
        cin >> nacinalidad;

        if (nacinalidad == '1')
        {
            cout << "Ingresa tu DNI: ";
            cin >>DNI;

            cout << "Ingresa tu nombre: ";
            cin >> nombres;

            cout << "Ingresa tu apellidos: ";
            cin >> apellidos;

            cout << "Ingresa tu dirección: ";
            cin >> direccion;

        }
        else if (nacinalidad == '2')
        {
            cout << "1. CARNET DE EXTRANJERIA." << endl;
            cout << "2. PASSAPORTE."<< endl << endl;
            cout << "Que tipo de documento de extranjeria tienes: ";
            cin >> documentoDeIdentidad;

            if (documentoDeIdentidad == '1')
            {
                /* code */
            }
            else if (documentoDeIdentidad == '2')
            {
                /* code */
            }
            
            
        }
        
        
    }
    else if (edad <= 17)
    {
        
    }
    
    

    return 0;
}