/*En una playa de estacionamiento cobran S/. 2.00 por hora o fracción los días Lunes, Martes y Miércoles, S/. 2.50 los días Jueves y Viernes, S/. 3.00 los días Sábado y Domingo. Se considera fracción de hora cuando haya pasado de 5 minutos. Diseñe un programa que determine cuánto debe pagar un cliente por su estacionamiento en un solo día de la semana. Si el tiempo ingresado es incorrecto imprima un mensaje de error.*/

#include <iostream>
using namespace std;
int main (){

    int DiaDeSemana;
    int tiempoHoras;
    int tiempoMinutos;
    int primerPrecio = 2;
    float segundoPrecio = 2.50;
    int tercerPrecio = 3;

    cout << "1. LUNES" << endl;
    cout << "2. MARTES" << endl;
    cout << "3. MIECOLES" << endl;
    cout << "4. JUEVES" << endl;
    cout << "5. VIERNES" << endl;
    cout << "6. SABADO" << endl;
    cout << "7. DOMINGO" << endl;
    cout << "Ingrese un día de la semana: ";
    cin >> DiaDeSemana;

    if (DiaDeSemana == 1 || DiaDeSemana == 2 || DiaDeSemana == 3)
    {
        cout << "Hoy es " << DiaDeSemana << " en tiempo de estacionamiento es " << tiempoHoras << " horas:" << tiempoMinutos << " minutos";
    }
    

    return 0;
}