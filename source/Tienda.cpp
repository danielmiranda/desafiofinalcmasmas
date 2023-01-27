#include "Tienda.h"
#include <algorithm>


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
	return true;
}

int Tienda::obtenerStock(IPrenda* itemStock) {
	int cantidadStock = 0;

	for (auto it : this->stockList) {

		if (*itemStock == *it->prenda) {
			cantidadStock = it->obtenerCantidad();
			break;
		}
	}
	
	return cantidadStock;
}

void Tienda::listarStock() {

	cout << "STOCK Disponible: " << endl;

	for (auto it : this->stockList) {
		cout << "Item: " << it->toString() << endl;
	}
	
}
