/*El gobierno ha implementado como parte de su programa social, un subsidio familiar bajo la siguiente reglamentación:
a) Las familias que tienen hasta 2 hijos, reciben S/. 70.00, las que tienen hasta 3 y 5 reciben S/. 90.00 y las que tienen 6 o más reciben S/: 120 mensual.
b) Por cada hijo en edad escolar reciben S/. 10.00 adicionales. Se considera la edad escolar entre 6 y 18 años.
c) Si la madre de familia fuera viuda, la familia recibe S/. 20.00 adicionales.

Determinar el monto mensual que recibirá una familia de acuerdo a su realidad familiar*/

#include <iostream>
using namespace std;
int main (){

    int cantidadHijos;
    string viuda;
    int total;
    int primerBono = 70;
    int segundoBono = 90;
    int tercerBono = 120;
    int bonoEscolar = 10;
    int BonoViuda = 20;

    cout << "Ingresa la cantidad de hijos tienes: ";
    cin >> cantidadHijos;

    if (cantidadHijos <= 2)
    {
        cout << "Eres vida (si - no): ";
        cin >> viuda;

        if (viuda == "si" || viuda == "SI" || viuda == "s" || viuda == "S") 
        {
            total = cantidadHijos * bonoEscolar;
            cout << "El bono que te corresponde es de : " << primerBono + total + BonoViuda << " dolares.   ";
        }
        else if (viuda == "no" || viuda == "NO" || viuda == "n" || viuda == "N")
        {
            total = cantidadHijos * bonoEscolar;
            cout << "El bono que te corresponde es de : " << primerBono + total << " dolares.   ";
        }
    }
    else if (cantidadHijos >=3 && cantidadHijos <=5)
    {
        cout << "Eres vida (si - no): ";
        cin >> viuda;

        if (viuda == "si" || viuda == "SI" || viuda == "s" || viuda == "S") 
        {
            total = cantidadHijos * bonoEscolar;
            cout << "El bono que te corresponde es de : " << segundoBono + total + BonoViuda << " dolares.  ";
        }
        else if (viuda == "no" || viuda == "NO" || viuda == "n" || viuda == "N")
        {
            total = cantidadHijos * bonoEscolar;
            cout << "El bono que te corresponde es de : " << segundoBono + total << " dolares.  ";
        }
    }
    else if (cantidadHijos >=6)
    {
        cout << "Eres vida (si - no): ";
        cin >> viuda;

        if (viuda == "si" || viuda == "SI" || viuda == "s" || viuda == "S") 
        {
            total = cantidadHijos * bonoEscolar;
            cout << "El bono que te corresponde es de : " << tercerBono + total + BonoViuda << " dolares.   ";
        }
        else if (viuda == "no" || viuda == "NO" || viuda == "n" || viuda == "N")
        {
            total = cantidadHijos * bonoEscolar;
            cout << "El bono que te corresponde es de : " << tercerBono + total << " dolares.   ";
        }
    }
    else
    {
        cout << "ERROR. DEBES INGRESAR UNA CANTIDAD.";
    }
    
    return 0;
}