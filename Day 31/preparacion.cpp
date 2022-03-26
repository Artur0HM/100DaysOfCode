#include <iostream>
using namespace std;
int main (){

    string utensiliosIngredientes;
    string respusta;
    int compra;
    

    cout << "Tienes todos los utensilios e ingredientes: ";
    cin >> utensiliosIngredientes;

    if (utensiliosIngredientes == "si" || utensiliosIngredientes == "Si" || utensiliosIngredientes == "SI")
    {
        cout << "Lo vas a querer con cebolla? ";
        cin >> respusta;

            if (respusta == "si" || respusta == "Si" || respusta == "SI")
            {
                cout << "Pelar, cortar, trocear y pochar la cebolla" << endl;
                cout << "Lo vas a querer con calabacin? ";
                cin >> respusta;

                    if (respusta == "si" || respusta == "Si" || respusta == "SI")
                    {
                        cout << "Cortar, tracear, y pochar el calabacin" << endl;
                        cout << "Pelar, cortar, freir y sazonar las patatas" << endl;
                        cout << "Cascar, batir y sazonar huevos" << endl;
                        cout << "Mezclar ingredientes anteriores" << endl;
                        cout << "Cocinar la mezcla por ambos lados" << endl;
                        cout << "EMPLATAR Y SERVIR AL CLIENTE   ";
                    }
                    
                    else if (respusta == "no" || respusta == "No" || respusta == "NO")
                    {
                        cout << "Pelar, cortar, freir y sazonar las patatas" << endl;
                        cout << "Cascar, batir y sazonar huevos" << endl;
                        cout << "Mezclar ingredientes anteriores" << endl;
                        cout << "Cocinar la mezcla por ambos lados" << endl;
                        cout << "EMPLATAR Y SERVIR AL CLIENTE   ";
                    }

                    else
                    {
                        cout << "Error, debes ingresat SI o NO.";
                    }
                    
            }

            else if (respusta == "no" || respusta == "No" || respusta == "NO")
            {
                cout << "Lo vas a querer con calabacin? ";
                cin >> respusta;

                    if (respusta == "si" || respusta == "Si" || respusta == "SI")
                    {
                        cout << "Cortar, tracear, y pochar el calabacin" << endl;
                        cout << "Pelar, cortar, freir y sazonar las patatas" << endl;
                        cout << "Cascar, batir y sazonar huevos" << endl;
                        cout << "Mezclar ingredientes anteriores" << endl;
                        cout << "Cocinar la mezcla por ambos lados" << endl;
                        cout << "EMPLATAR Y SERVIR AL CLIENTE   ";
                    }
                    
                    else if (respusta == "no" || respusta == "No" || respusta == "NO")
                    {
                        cout << "Pelar, cortar, freir y sazonar las patatas" << endl;
                        cout << "Cascar, batir y sazonar huevos" << endl;
                        cout << "Mezclar ingredientes anteriores" << endl;
                        cout << "Cocinar la mezcla por ambos lados" << endl;
                        cout << "EMPLATAR Y SERVIR AL CLIENTE   ";
                    }

                    else
                    {
                        cout << "Error, debes ingresar SI o NO.";
                    }
            }
            
            
        
    }

    else if (utensiliosIngredientes == "no" || utensiliosIngredientes == "No" || utensiliosIngredientes == "NO")
    {
        cout << "Que es lo que te falta [1] utensilios o [2] ingredientes: ";
        cin >> compra;

        if (compra == 1)
        {
            cout << "Necesito comprar utensilios.";
        }

        else if (compra == 2)
        {
            cout << "Necesito comprar ingredientes.";
        }
        
        else
        {
            cout << "Error, debes elegir uno de los dos.";
        }
        
    }
    
    else
    {
        cout << "ERROR DEBES ELEGIR UNA DE LAS DOS OPCIONES.";
    }
    


    return 0;
}