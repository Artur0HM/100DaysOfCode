/*Dos Atletas recorren la misma distancia y se registra sus tiempos en minutos y segundos. Se desea saber el tiempo total utilizando por ambos atletas en horas, minutos y segundos.*/

#include <iostream>
using namespace std;
int main (){

    int primerAltletaMinutos;
    int primerAtetlaSegundos;
    int segundoAtletaMinutos;
    int segundoAtletaSegundos;
    int totalHoras;
    int totalMinutos;
    int totalSegundos;

    cout << "Ingrese minutos del primer atleta: ";
    cin >> primerAltletaMinutos;
    cout << "Ingrese segundos del primer atleta: ";
    cin >> primerAtetlaSegundos;
    cout << "Ingrese minutos del segundo atleta: ";
    cin >> segundoAtletaMinutos;
    cout << "Ingrese segundos del segundo atleta: ";
    cin >> segundoAtletaSegundos;

    totalHoras = (primerAltletaMinutos + segundoAtletaMinutos) / 60;
    totalMinutos = (primerAltletaMinutos + segundoAtletaMinutos) % 60;
    totalSegundos = primerAtetlaSegundos + segundoAtletaSegundos;
    

    cout << "total " << totalHoras << " horas." << endl;
    cout << "total " << totalMinutos << " minutos." <<endl;
    cout << "total " << totalSegundos << " segundos.  ";

    return 0;
}