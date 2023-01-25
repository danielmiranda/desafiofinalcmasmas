#pragma once
#include <string>
#include "Tienda.h"
#include "IPrenda.h"

using namespace std;

class Stock
{
public:
	Tienda *tienda = NULL;
	IPrenda *prenda = NULL;
	Stock(Tienda* tienda, IPrenda* prenda, int cantidad);
	int obtenerCantidad();

private:
	int cantidad;
};

