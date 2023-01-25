#include<iostream>
#include "Vendedor.h"
#include "Tienda.h"

using namespace std;

int main()
{
    Tienda* tienda_lunar = new Tienda("Mi Tienda", "en la Luna");

    Vendedor *vendedor_selenita = new Vendedor("Daniel", "Miranda", 1, tienda_lunar);
    string nombre = vendedor_selenita->toString();
    cout << vendedor_selenita->toString();

    return 0;
}