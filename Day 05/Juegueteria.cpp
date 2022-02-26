/*Una juguetería tiene mucho éxito en dos de sus productos: payasos y muñecas. Suele hacer venta por correo y la empresa de logística les cobra por peso de cada paquete así que deben calcular el peso de los payasos y muñecas que saldrán en cada paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g. Escribir un programa que lea el número de payasos y muñecas vendidos en el último pedido y calcule el peso total del paquete que será enviado.*/

#include <iostream>
using namespace std;

int main (){

    string juguete;
    int cantidadPayasos;
    int cantidadMuñecas;
    int pesoPayasos = 112; 
    int pesoMuñecas = 75;
    int total;

    cout << "Que juguetes compraste (payaso o muñeca): ";
    cin >> juguete;
    
    if (juguete == "payaso")
    {
        cout << "Ingrese la cantidad de payasos que compro: ";
        cin >> cantidadPayasos;

        total = cantidadPayasos * pesoPayasos;

        cout << "El peso total de los " << juguete << " es de " << total << "g.";
    }
    else if (juguete == "muñeca")
    {
        cout << "Ingrese la cantidad de " <<  juguete  << " que compro: ";
        cin >> cantidadMuñecas;

        total = cantidadMuñecas * pesoMuñecas;

        cout << "El peso toral de los " << juguete << " es de " << total << "g.";
    }
    else{
        cout << "NO COMPRASTE NINGUN JUGUETE.";
    }
    
    return 0;
}