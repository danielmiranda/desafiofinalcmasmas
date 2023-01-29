#pragma once
#include <string>
#include "Tienda.h"

using namespace std;
class Vendedor
{
public:
	Vendedor(string nombre, string apellido, int codigo, Tienda * tienda);
	string obtenerNombre();
	int obtenerCodigo();
	string toString();
	string obtenerTienda();

private:
	string vendedorNombre;
	string vendedorApellido;
	int vendedorCodigo;
	Tienda * vendedorTienda;


};

