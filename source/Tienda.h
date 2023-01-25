#pragma once
#include <string>

using namespace std;


class Tienda
{
public:
	string obtenerNombre();
	string obtenerDireccion();
	string toString();

	Tienda();
	Tienda(string nombre, string direccion);

private:
	string tiendaNombre;
	string tiendaDireccion;
};

