#include "Stock.h"

Stock::Stock(Tienda *tienda, Prenda *prenda, int cantidad) {
	this->cantidad = cantidad;
	this->prenda = prenda;
	this->tienda = tienda;

}

int Stock::obtenerCantidad() {
	return this->cantidad;
}
