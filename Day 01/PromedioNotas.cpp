#include <iostream>
using namespace std;

int main (){
    double primera_nota;
    double segunda_nota;
    double tercera_nota;

    cout << "PROMEDIO DE LAS NOTAS." <<endl;
    
    cout << "Ingrese la priemra nota: ";
    cin >> primera_nota;

    cout << "Ingrese la segunda nota: ";
    cin >> segunda_nota;

    cout << "Ingrese la tercera nota: ";
    cin >> tercera_nota;

    cout << "EL PROMEDIO FINAL ES: " << (primera_nota + segunda_nota + tercera_nota) / 3;


    return 0;
}