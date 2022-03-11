/*(a-b)(a+b).*/

#include <iostream>
using namespace std;

int main (){

    float ingrese_A;
    float ingrese_B;

    cout << "Ingrese A: ";
    cin >> ingrese_A;

    cout << "Ingrese B: ";
    cin >> ingrese_B;

    cout << "El resultado es: " << ((ingrese_A - ingrese_B) * (ingrese_A + ingrese_B));

    return 0;
}