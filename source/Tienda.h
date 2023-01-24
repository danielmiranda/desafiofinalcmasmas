#pragma once
#include <string>

using namespace std;


class Tienda
{
public:
	string obtenerNombre();
	string obtenerDireccion();
	Tienda(string nombre, string direccion);

private:
	string tiendaNombre;
	string tiendaDireccion;
};

