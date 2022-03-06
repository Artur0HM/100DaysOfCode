/*En un almacén se rebaja 10% del precio al cliente si compra mas de 20 artículos y 5% si compra hasta 20 artículos pero más de 10. Dado el precio unitario de un artículo y la cantidad adquirida, muestre lo que debe pagar el cliente .*/

#include <iostream>
using namespace std;
int main (){
    
    int cantidadDeProductos;
    int primerDescuento = 10;
    int segundoDescuento = 5;
    const int precio = 25;
    int  total;
    int totalConDescuento;

    cout << "Ingrese que catidad de productos compro: ";
    cin >> cantidadDeProductos;

    if (cantidadDeProductos > 20)
    {
        total = cantidadDeProductos * precio;
        totalConDescuento = (total - ( primerDescuento * total) / 100);

        cout << "Compraste " << cantidadDeProductos << " prodcutos" << endl;
        cout << "El precio de tus productos en total son: " << total << " dolares" << endl;
        cout << "Por comprar más de 20 productos tienes un descuento del: " << primerDescuento << "%" << endl; 
        cout << "EN TOTAL DEBES PAGAR: " << totalConDescuento << " dolares,";
    }
    
    else if (cantidadDeProductos > 10 && cantidadDeProductos <= 20 )
    {
        total = cantidadDeProductos * precio;
        totalConDescuento = (total - ( segundoDescuento * total) / 100);

        cout << "Compraste " << cantidadDeProductos << " prodcutos" << endl;
        cout << "El precio de tus productos en total son: " << total << " dolares" << endl;
        cout << "Por comprar mas de 10 productos pero menos de 20  productos tienes un descuento del: " << segundoDescuento << "%" << endl; 
        cout << "EN TOTAL DEBES PAGAR: " << totalConDescuento << " dolares,";
    }

    else if (cantidadDeProductos <= 10)
    {
        total = cantidadDeProductos * precio;
        cout << "Compraste " << cantidadDeProductos << " prodcutos" << endl;
        cout << "NO TE CORRESPONDE NINGUN DESCUENTO." <<endl;
        cout << "Precio de tus productos es de: " << total << " dolares.";
    }

    else
    {
        cout << "ERROR, DEBES INGRESAR LA CANTIDAD DE PRODCTOS QUE COMPRASTES.";
    }
    
    

    
    
    
    return 0;
}   