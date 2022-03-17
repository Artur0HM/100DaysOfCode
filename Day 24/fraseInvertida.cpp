/*Escribir un programa que pida al usuario que introduzca una frase en la consola y muestre por pantalla la frase invertida.*/

#include <iostream>
using namespace std;
int main (){

    string frase;

    cout << "Ingrese una frase: ";
    cin >> frase;
    cout << frase << endl;

    string reverse (frase.rbegin(), frase.rend());

    cout << reverse;
    



/*

    string tmp_s = "This string will be reversed";
    cout << tmp_s << endl;

    string tmp_s_reversed (tmp_s.rbegin(), tmp_s.rend());
    cout << tmp_s_reversed << endl;

*/

    return 0;
}