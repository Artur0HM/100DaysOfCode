/*Escribir un programa que pida al usuario su peso (en kg) y estatura (en metros), calcule el índice de masa corporal y lo almacene en una variable, y muestre por pantalla la frase Tu índice de masa corporal es <imc> donde <imc> es el índice de masa corporal calculado redondeado con dos decimales.*/

#include <iostream>
#include <math.h>
using namespace std;

int main (){
    
    float peso;
    float altura;

    cout << "Ingresa tu peso; ";
    cin >> peso;

    cout << "Ingresa tu altura: ";
    cin >> altura;

    cout << "Tu IMC es: " << peso / (pow(altura,2));

    return 0;
}