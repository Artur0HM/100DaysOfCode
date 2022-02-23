#include <iostream>
using namespace std;

int main(){

    int edad;
    string nombres;
    string sexo;
    int altura;

    cout << "INGRESE SUS DATOS" <<endl;

    cout << "Ingrese sus nombres: " ;
    cin >> nombres;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su sexo: ";
    cin >> sexo;

    cout << "Ingrese su altura: ";
    cin >> altura;

    cout << "Su nombre es: " << nombres << " tu edad es de " << edad << " años, usted es " << sexo << " su altura es " << altura << " centimetros";


    return 0;
}