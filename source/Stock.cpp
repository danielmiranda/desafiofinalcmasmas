#include "Stock.h"

Stock::Stock(Tienda *tienda, IPrenda *prenda, int cantidad) {
	this->cantidad = cantidad;
	this->prenda = prenda;
	this->tienda = tienda;

}

int Stock::obtenerCantidad() {
	return this->cantidad;
}
