#include <iostream>
using namespace std;

int main (){

    double base;
    double altura;

    cout << "EL AREA DEL UN TRIANGULO" <<endl;

    cout << "Ingresa la base: ";
    cin >> base;

    cout << "Ingresa la altura: ";
    cin >> altura;

    cout << "El area del triangulo es: " << (base * altura)/ 2 << " cm";
    return 0;
}