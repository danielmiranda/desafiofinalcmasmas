#pragma once
#include <string>

#include "IPrenda.h"

using namespace std;

class Stock
{
public:

	IPrenda* prenda;
	Stock();
	Stock(IPrenda * prenda, int cantidad);
	int obtenerCantidad();
	string toString();

private:
	int cantidad = 0;
};

