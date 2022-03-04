/*Requerir al usuario que ingrese un día de la semana e imprimir un mensaje si es lunes, otro mensaje diferente si es viernes, otro mensaje diferente si es sábado o domingo. Si el día ingresado no es ninguno de esos, imprimir otro mensaje.*/

#include <iostream>
using namespace std;
int main (){

    string diaDeSemana;

    cout << "Ingrese un dia de la semana: ";
    cin >> diaDeSemana;

    if (diaDeSemana == "lunes" || diaDeSemana == "LUNES")
    {
        cout << "Es " << diaDeSemana << ". Que genial.";
    }

    else if (diaDeSemana == "martes" || diaDeSemana == "MARTES")
    {
        cout << "Es " << diaDeSemana << ". A comer lomito.";
    }

    else if (diaDeSemana == "miercoles" || diaDeSemana == "MIERCOLES")
    {
        cout << "Es " << diaDeSemana << ". Ya va ser fin de semana.";
    }

    else if (diaDeSemana == "jueves" || diaDeSemana == "JUEVES")
    {
        cout << "Es " << diaDeSemana << ". Me gusta los chocolates.";
    }
    
    else if (diaDeSemana == "viernes" || diaDeSemana == "VIERNES")
    {
        cout << "Es " << diaDeSemana << ". A dormir bien.";
    }

    else if (diaDeSemana == "sabado" || diaDeSemana =="SABADO")
    {
        cout << "Es " << diaDeSemana << ". A jugar PS5.";
    }

    else if (diaDeSemana == "domingo" || diaDeSemana == "DOMINGO")
    {
        cout << "Es " << diaDeSemana << ". Mañana ya es Lunes.";
    }
    
    else
    {
        cout << "ERROR DEBES DE INGRESAR UN DIA DE LA SEMANA.";
    }

    return 0;
}