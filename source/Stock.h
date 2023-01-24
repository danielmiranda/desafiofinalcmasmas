#pragma once
#include <string>
#include "Tienda.h"
#include "Prenda.h"

using namespace std;

class Stock
{
public:
	Tienda *tienda = NULL;
	Prenda *prenda = NULL;
	Stock(Tienda* tienda, Prenda* prenda, int cantidad);
	int obtenerCantidad();

private:
	int cantidad;
};

