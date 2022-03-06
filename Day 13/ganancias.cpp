/*Un comerciante compra un artículo a un costo dado. Determine el precio al cual debe venderlo si desea ganar el 15%.*/

# include <iostream>
using namespace std;
int main (){

    int articuloComprado;
    const int ganancia = 15;
    float total;

    cout << "Cuanto costo el articulo: ";
    cin >> articuloComprado;

    total = (ganancia * articuloComprado) / 100;

    cout << "El producto te costo " << articuloComprado << " dolares, el " << ganancia << "%" << " es de " << total << " dolares, el producto debes de venderlo a: " << (articuloComprado + (ganancia * articuloComprado) / 100);

    return 0;
}