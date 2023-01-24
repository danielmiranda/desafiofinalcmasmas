#include "Tienda.h"


Tienda::Tienda(string nombre, string direccion) {
	this->tiendaNombre = nombre;
	this->tiendaDireccion = direccion;
}

string Tienda::obtenerNombre() {
	return this->tiendaNombre;

}

string Tienda::obtenerDireccion() {
	return this->tiendaDireccion;
}
