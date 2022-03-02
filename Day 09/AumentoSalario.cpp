/*Hacer un programa en C++ para determinar el aumento de un trabajador, se debe tomar en cuenta que si ganaba más de $2000 tendrá un aumento del 5%, si generaba menos de $2000 su aumento será de un 10%.*/

#include <iostream>
using namespace std;

int main (){
    
    int sueldo;
    int total;
    int primerAumento = 5;
    int segundoAumento = 10;

    cout << "Ingresa el cuanto ganas al mes: ";
    cin >> sueldo;

    if (sueldo >= 2000)
    {
        total = (sueldo + (primerAumento * sueldo) / 100);
        
        cout << " Tu salario mensual es de " << sueldo << " dolares, tienes un aumento del " << primerAumento << "%." << " Tu salario actual es de: " << total << " dolares.";
    }
    
    else if (sueldo < 2000)
    {
        total = (sueldo + (segundoAumento * sueldo) / 100);

        cout << " Tu salario mensual es de " << sueldo << " dolares, tienes un aumento del " << segundoAumento << "%." << " Tu salario actual es de: " << total << " dolares.";
    }
    
    else
    {
        cout << " Ingresa tu salario, intenta otra vez";
    }
    
    
    
    return 0;
}