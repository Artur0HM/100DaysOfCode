#include <iostream>
using namespace std;
int main (){
    const string ingredienteUno = "mosarella";
    const string ingredienteDos = "tomate";
    char tipoPiza;
    char escoger;
    int cantidadDepizza;
    string ingredientes;
    int precioPizzaVegetarianaEntera = 12;
    float PrecioPizzaVegetarianaPorPiezas = 1.5;
    int precioPizzaNormalEntera = 10;
    int PrecioPizzaNormalPorPiezas = 1;

    float total;
    

    cout << "1. Pizza vegetariana" << endl;
    cout << "2. Pizza no vegetariana" << endl;
    cout << "QUE PIZZA VAS A PEDIR [1] - [2]: ";
    cin >> tipoPiza;

    if (tipoPiza == '1')
    {
        cout << "ELEGISTE LA PIZZA VEGETARIANA." << endl <<endl ;
        cout << "1. Pimiento." << endl;
        cout << "2. Tofu." << endl;
        cout << "Tenemos ingredienets extras solo puedes elegir uno de ellos: ";
        cin >> ingredientes;

        if (ingredientes == "Pimiento" || ingredientes == "pimiento" || ingredientes == "PIMIENTO")
        {
            cout << "[1] Pizza entera [2] Por piezas" << endl;
            cout << "Que vas a pedir una Pizza entera o por partes: ";
            cin >> escoger;

            if (escoger == '1')
            {
                cout << "Cuantas Pizzas enteras vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * precioPizzaVegetarianaEntera;
                cout << "El precio de tus " << cantidadDepizza << " pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else if (escoger == '2')
            {
                cout << "Cuantas Pizzas de piezas vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * PrecioPizzaVegetarianaPorPiezas;
                cout << "El precio de tus " << cantidadDepizza << " piezas de pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else
            {
                cout << "Debes elegir una de las dos opciones.";
            }
        }
        else if (ingredientes == "Tofu" || ingredientes == "tofu" || ingredientes == "TOFU")
        {
            cout << "[1] Pizza entera [2] Por piezas" << endl;
            cout << "Que vas a pedir una Pizza entera o por partes: ";
            cin >> escoger;

            if (escoger == '1')
            {
                cout << "Cuantas Pizzas enteras vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * precioPizzaVegetarianaEntera;
                cout << "El precio de tus " << cantidadDepizza << " pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else if (escoger == '2')
            {
                cout << "Cuantas Pizzas de piezas vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * PrecioPizzaVegetarianaPorPiezas;
                cout << "El precio de tus " << cantidadDepizza << " piezas de pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else
            {
                cout << "Debes elegir una de las dos opciones.";
            }
            
        }
        else
        {
            cout << "Debes ingresar un ingrediente.";
        }
        
    }
    else if (tipoPiza == '2')
    {
        cout << "ELEGISTE UNA PIZZA NORMAL." << endl <<endl ;
        cout << "1. Peperoni." << endl;
        cout << "2. Jamon." << endl;
        cout << "3. Salmon." << endl;
        cout << "Tenemos ingredienets extras solo puedes elegir uno de ellos: ";
        cin >> ingredientes;

        if (ingredientes == "Peperoni" || ingredientes == "peperoni" || ingredientes == "PEPERONI")
        {
            cout << "[1] Pizza entera [2] Por piezas" << endl;
            cout << "Que vas a pedir una Pizza entera o por partes: ";
            cin >> escoger;

            if (escoger == '1')
            {
                cout << "Cuantas Pizzas enteras vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * precioPizzaNormalEntera;
                cout << "El precio de tus " << cantidadDepizza << " pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else if (escoger == '2')
            {
                cout << "Cuantas Pizzas de piezas vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * PrecioPizzaNormalPorPiezas;
                cout << "El precio de tus " << cantidadDepizza << " piezas de pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else
            {
                cout << "Debes elegir una de las dos opciones.";
            }
        }
        else if (ingredientes == "Jamon" || ingredientes == "jamon" || ingredientes == "JAMON")
        {
            cout << "[1] Pizza entera [2] Por piezas" << endl;
            cout << "Que vas a pedir una Pizza entera o por partes: ";
            cin >> escoger;

            if (escoger == '1')
            {
                cout << "Cuantas Pizzas enteras vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * precioPizzaNormalEntera;
                cout << "El precio de tus " << cantidadDepizza << " pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else if (escoger == '2')
            {
                cout << "Cuantas Pizzas de piezas vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * PrecioPizzaNormalPorPiezas;
                cout << "El precio de tus " << cantidadDepizza << " piezas de pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
    
        }
        else if (ingredientes == "Salmon" || ingredientes == "salmon" || ingredientes == "SALMON")
        {
            cout << "[1] Pizza entera [2] Por piezas" << endl;
            cout << "Que vas a pedir una Pizza entera o por partes: ";
            cin >> escoger;

            if (escoger == '1')
            {
                cout << "Cuantas Pizzas enteras vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * precioPizzaNormalEntera;
                cout << "El precio de tus " << cantidadDepizza << " pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
            else if (escoger == '2')
            {
                cout << "Cuantas Pizzas de piezas vas a comprar: ";
                cin >> cantidadDepizza;
                total = cantidadDepizza * PrecioPizzaNormalPorPiezas;
                cout << "El precio de tus " << cantidadDepizza << " piezas de pizzas es: " << total << " dolares." << endl;
                cout << "Tus pizzas tenen " << ingredienteUno << ", " << ingredienteDos << " agregaste un ingrediente "
                << ingredientes ;
            }
        }
        
    }
    else
    {
        cout << "ERROR, DEBES ESCOGER UNA DE LAS DOS OPCIONES.";
    }
    return 0;
}
