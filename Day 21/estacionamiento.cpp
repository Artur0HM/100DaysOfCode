/*En una playa de estacionamiento cobran S/. 2.00 por hora o fracción los días Lunes, Martes y Miércoles, S/. 2.50 los días Jueves y Viernes, S/. 3.00 los días Sábado y Domingo. Se considera fracción de hora cuando haya pasado de 5 minutos. Diseñe un programa que determine cuánto debe pagar un cliente por su estacionamiento en un solo día de la semana. Si el tiempo ingresado es incorrecto imprima un mensaje de error.*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main (){

    string DiaDeSemana;
    int tiempoHoras;
    int tiempoMinutos;
    int primerPrecio = 2;
    float segundoPrecio = 2.50;
    int tercerPrecio = 3;
    int totalPagarPorHoras;
    double totalPagarPorMinutos;
    double totalPagar;

    cout << "INGRESE QUE DÍA ES; " << endl <<endl; 
    cout << "LUNES - MARTES - MIECOLES - JUEVES - VIERNES - SABADO - DOMINGO" << endl;
    cout << "Ingrese un día de la semana: ";
    cin >> DiaDeSemana;

    if (DiaDeSemana == "lunes" || DiaDeSemana == "martes" || DiaDeSemana == "miercoles")
    {
        cout << "Cuantas horas se quedo: ";
        cin >> tiempoHoras;
        cout << "Cuantos minutos se quedo: ";
        cin >> tiempoMinutos;

        totalPagarPorHoras = tiempoHoras * primerPrecio;
        totalPagarPorMinutos = tiempoMinutos / 60 * 2;
        totalPagar = double(totalPagarPorHoras) + double(totalPagarPorMinutos);

    /* cout << "Hoy es " << DiaDeSemana << " el tiempo de estacionamiento es " << tiempoHoras << " horas:" << tiempoMinutos << " minutos" << endl;*/

        cout << "Total a pagar es de : " << totalPagarPorMinutos << " soles";


    }
    
    return 0;
}