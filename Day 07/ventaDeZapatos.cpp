/* Hacer un programa en C++ para una tienda de zapatos que tiene una promoción de descuento para vender al mayor, esta dependerá del número de zapatos que se compren. Si son más de diez, se les dará un 10% de descuento sobre el total de la compra; si el número de zapatos es mayor de veinte pero menor de treinta, se le otorga un 20% de descuento; y si son más treinta zapatos se otorgará un 40% de descuento. El precio de cada zapato es de $80.*/

# include <iostream>
using namespace std; 
int main () {

    int cuantosZapatosCompro;
    int total;
    const int precio = 80;
    int descuentoUno = 10; 
    int descuentoDos = 20;
    int descuentoTres = 40;

    cout << " Cuantos zapatos compro: ";
    cin >> cuantosZapatosCompro;

    if (cuantosZapatosCompro >= 10 && cuantosZapatosCompro <= 19)
    {
        total = cuantosZapatosCompro * precio;

        cout << "Usted compro " << cuantosZapatosCompro << " zapatos." << endl;
        cout << "El precio total es de: " << total << endl;
        cout << "Tiene un descuento del " << descuentoUno << "%." << endl;
        cout << "Total a pagar es de: " << (total - (descuentoUno * total) / 100);
    }

    else if (cuantosZapatosCompro >= 20 && cuantosZapatosCompro < 30)
    {
        total = cuantosZapatosCompro * precio;

        cout << "Usted compro " << cuantosZapatosCompro << " zapatos." <<endl;
        cout << "El precio total es de: " << total << endl;
        cout << "Tiene un descuento del " << descuentoDos << "%." <<endl;
        cout << "Total a pagar es de: " << (total - (descuentoDos * total) / 100);
    }
    
    else if (cuantosZapatosCompro >= 30)
    {
        total = cuantosZapatosCompro * precio;

        cout << "Usted compro " << cuantosZapatosCompro << " zapatos." << endl;
        cout << "El precio total es de: " << total << endl;
        cout << "Tienes un descuento del " << descuentoTres << "%." <<endl;
        cout << "Total a pagar es de: " << (total - (descuentoTres * total) / 100);
    }
    
    else 
    {
        cout << "NO INGRESASTE NINGUNA CANTIDAD.";
    }
    




    return 0;
}



