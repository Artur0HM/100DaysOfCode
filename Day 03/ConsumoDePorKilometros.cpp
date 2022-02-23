/*Escribí un programa que solicite al usuario ingresar la cantidad de kilómetros recorridos por una motocicleta y la cantidad de litros de combustible que consumió durante ese recorrido. Mostrar el consumo de combustible por kilómetro.*/

#include <iostream>
using namespace std;

int main (){

    int kilometros;
    double litrosCombustible;
    double consumo;

    cout << "Ingresa los kilometros recorridos: ";
    cin >> kilometros;

    cout << "Ingresa litros de combustible gastados: ";
    cin >> litrosCombustible;

    consumo = kilometros / litrosCombustible;

    cout << "El consumo por kilometros es de: " << consumo << " kilometros."; 

    return 0;
}