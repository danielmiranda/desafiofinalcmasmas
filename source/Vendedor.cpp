#include "Vendedor.h"

using namespace std;

Vendedor::Vendedor(string nombre, string apellido, int codigo) {
	this->vendedorNombre = nombre;
	this->vendedorApellido = apellido;
	this->vendedorCodigo = codigo;
}

string Vendedor::obtenerNombre() {
	return this->vendedorApellido + ", " + this->vendedorNombre;
}

int Vendedor::obtenerCodigo() {
	return this->vendedorCodigo;
}