/*Imagina que acabas de abrir una nueva cuenta de ahorros que te ofrece el 4% de interés al año. Estos ahorros debido a intereses, que no se cobran hasta finales de año, se te añaden al balance final de tu cuenta de ahorros. Escribir un programa que comience leyendo la cantidad de dinero depositada en la cuenta de ahorros, introducida por el usuario. Después el programa debe calcular y mostrar por pantalla la cantidad de ahorros tras el primer, segundo y tercer años. Redondear cada cantidad a dos decimales. APORTE EXTRA PEDIREMOS LOS NOMBRES COMPLETOS, NÚMERO DE TARJETA, NÚMERO SECRETO Y LA COMTRASEÑA */

#include <iostream>
using namespace std;

int main (){
    
    string nombres;
    string apellidos;
    char numeroDeTarjeta [16];
    int numeroSecreto;
    int contraseña;
    int intereses = 4;

    cout << "Ingrese sus nombres: ";
    cin >> nombres;

    cout << "Ingree sus apellidos: ";
    cin >> apellidos;

    cout << "Ingrese número de la tarjeta: ";
    cin >> numeroDeTarjeta;

    cout << "Ingrese numero secreto de 3 cifras: ";
    cin >> numeroSecreto;

    cout << "Ingrese su contraseña de 4 cifras: ";
    cin >> contraseña;

    if (contraseña == 4523)
    {
        cout << "Tu contraseña es correcta.";
    }
    
    else {
        cout << "Tu contraseña es incorrecta";;
    }

    
    
    
    
    return 0;
}