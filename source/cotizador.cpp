#include<iostream>
#include "Vendedor.h"

using namespace std;

int main()
{

    Vendedor *vendedor1 = new Vendedor("Daniel", "Miranda", 1);
    string nombre = vendedor1->obtenerNombre();
    cout << nombre;

    return 0;
}