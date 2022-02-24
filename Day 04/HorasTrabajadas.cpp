/*Escribir un programa que pregunte al usuario por el número de horas trabajadas y el coste por hora. Después debe mostrar por pantalla la paga que le corresponde*/

#include <iostream>
using namespace std;

int main (){    

    int horasTrabajadas;
    int costoPorHoras;
    int pagoPorHora;

    cout << "Ingresa las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingresa pago por hora: ";
    cin >> costoPorHoras;

    pagoPorHora = horasTrabajadas * costoPorHoras;

    cout << "EL pago por hora es " << costoPorHoras << " dolares, haz trabajado " << horasTrabajadas << " horas," << endl;
    cout << "Tu pago es de: " << pagoPorHora << " dolares.";

    return 0;
}