#include "Tienda.h"


Tienda::Tienda(string nombre, string direccion) {
	this->tiendaNombre = nombre;
	this->tiendaDireccion = direccion;
}

Tienda::Tienda(){}

string Tienda::obtenerNombre() {
	return this->tiendaNombre;

}

string Tienda::obtenerDireccion() {
	return this->tiendaDireccion;
}

string Tienda::toString() {
	return this->obtenerNombre() + ", " + this->obtenerDireccion();
}

bool Tienda::agregarStock(Stock* itemStock) {
	this->stockList.push_back(itemStock);

	for (auto it : this->stockList) {
		cout << "Owner:" << it->toString()
			<< "  Address_of_Land:" << it << endl;
	}

	return false;
}

void Tienda::listarStock() {
	cout << "STOCK Disponible: " << endl;
}
