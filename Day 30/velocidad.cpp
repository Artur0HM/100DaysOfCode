#include <iostream>
using namespace std;
int main (){

    int velacidad;
    int tiempoSegundos;
    int distancia;

    cout << "Ingrese la velocidad: ";
    cin >> velacidad;

    cout << "Ingrese el tiempo en segundos: "; 
    cin >> tiempoSegundos;

    distancia = velacidad * tiempoSegundos;

    cout << "La distancia recorrida en metros es de : " << distancia << " metros.";

    return 0;
}