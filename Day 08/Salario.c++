/*Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su sueldo semanal, se sabe que si trabaja 40 horas o menos, se le pagará $20 por hora, pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $25 por hora.*/

#include <iostream>
using namespace std;
int main () {
    
    int horasTrabajadas;
    int horasDeTrabajoNormal = 40;
    int horasExtras;
    int pagoNormal = 20;
    int pagoPorHorasExtras = 25;
    int pagoSemanal;

    cout << " Cuantas horas trabajeste esta semana: ";
    cin >> horasTrabajadas;

    if (horasTrabajadas <= horasDeTrabajoNormal)
    {
        pagoSemanal = horasTrabajadas * pagoNormal;
        cout << " El pago que te corresponde esta semana es: " << pagoSemanal << " dolares.";
    }
    
    else if (horasTrabajadas > 40)
    {
        horasExtras = horasTrabajadas - horasDeTrabajoNormal;
        pagoSemanal = horasDeTrabajoNormal * pagoNormal;

        cout << "Esta semana trabajaste "  << horasExtras << " horas extras, tu pago de esta semana es de: " << (horasDeTrabajoNormal * pagoNormal) + (horasExtras * pagoPorHorasExtras) << " dolares."; 
    }
    else
    {
        cout << " DEBES INGRESAR HORAS TRABAJADAS.";
    }

    return 0;
}
