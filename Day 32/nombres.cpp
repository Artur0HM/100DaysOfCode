#include <iostream>
using namespace std;
int main () {

    char nombres[50];
    int cantidad;

    cout << "Ingrese su nombre: ";
    cin.getline(nombres,50);

    cout << "Ingrese un número: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << i << ". "<< nombres << endl;
    }
    

    
    return 0;
}