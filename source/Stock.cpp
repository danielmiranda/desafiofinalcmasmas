#include "Stock.h"
#include <string>
#include<iostream>

using namespace std;

//Stock::Stock(Tienda* tienda, IPrenda* prenda, int cantidad) {
Stock::Stock(){}

Stock::Stock(IPrenda * prenda, int cantidad) {
	this->cantidad = cantidad;
	this->prenda = prenda;
	//this->tienda = tienda;
}

int Stock::obtenerCantidad() {
	return this->cantidad;
}

string Stock::toString() {
	return this->prenda->toString() + " : " + std::to_string(this->cantidad);
}
