#include "Vendedor.h"

using namespace std;

Vendedor::Vendedor(string nombre, string apellido, int codigo, Tienda * tienda) {
	this->vendedorNombre = nombre;
	this->vendedorApellido = apellido;
	this->vendedorCodigo = codigo;
	this->vendedorTienda = tienda;
}

string Vendedor::obtenerNombre() {
	return this->vendedorApellido + ", " + this->vendedorNombre;
}

string Vendedor::obtenerTienda() {
	return this->vendedorTienda->toString();
}

int Vendedor::obtenerCodigo() {
	return this->vendedorCodigo;
}

string Vendedor::toString() {
	return this->obtenerNombre() + " :: " + this->obtenerTienda();
}