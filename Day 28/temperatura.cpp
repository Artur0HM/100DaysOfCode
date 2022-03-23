#include <iostream>
using namespace std;
int main (){

    int temperatura;

    cout << "Ingrese la temperatuta: ";
    cin >> temperatura;

    if (temperatura <= 15)
    {
        cout << "La temperatura es de " << temperatura << " esta haciendo demaciado frio.";
    }
    else if (temperatura >= 16)
    {
        cout << "La temperatura es de " << temperatura << " esta haciendo demaciado calor.";
    }
    else
    {
        cout << "Debes ingresar la temperatura.";
    }
    

    return 0;
}