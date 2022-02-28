/*Escribí un programa que solicite al usuario que ingrese cuántos shows musicales ha visto en el último año y almacene ese número en una variable. A continuación mostrar en pantalla un valor de verdad (True o False) que indique si el usuario ha visto más de 3 shows.*/

#include <iostream>
using namespace std;
int main () {

    int cuantosConciertos;

    cout << " Cuantos conciertos asistite este año: ";
    cin >> cuantosConciertos;

    if ( cuantosConciertos > 3)
    {
        cout  << "Verdadero";
    }

    else {
        cout << " Falso";
    }


    return 0;
}