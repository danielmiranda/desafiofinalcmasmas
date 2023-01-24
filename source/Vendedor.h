#pragma once
#include <string>

using namespace std;
class Vendedor
{
public:
	Vendedor(string nombre, string apellido, int codigo);
	string obtenerNombre();
	int obtenerCodigo();
private:
	string vendedorNombre;
	string vendedorApellido;
	int vendedorCodigo;

};

