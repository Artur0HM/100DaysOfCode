/*Escribir un programa que solicite al usuario una letra y, si es una vocal, muestre el mensaje “es vocal”. Se debe validar que el usuario ingrese sólo un carácter. Si ingresa un string de más de un carácter, informarle que no se puede procesar el dato.*/

#include <iostream>
using namespace std;
int main (){

    char vocal[0];
    
    string primeraVocal = "a";
    string segundaVocal = "e";
    string terceraVocal = "i";
    string cuartaVocal = "o";
    string quintaVocal = "u";
    
    cout << "Ingrese una vocal: ";
    cin >> vocal;

    if (vocal == primeraVocal || vocal == segundaVocal || vocal == terceraVocal || vocal == cuartaVocal || vocal == quintaVocal)
    {
        cout << "Ingresaste la vocal " << vocal;
    }
    else
    {
        cout << "Debes ingqresar una voval.";
    }

    


    return 0;
}