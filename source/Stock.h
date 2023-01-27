#pragma once
#include <string>
//#include "Tienda.h"
#include "IPrenda.h"

using namespace std;

class Stock
{
public:
	//Tienda* tienda;
	IPrenda* prenda = NULL;
	//Stock(Tienda* tienda, IPrenda* prenda, int cantidad);
	Stock();
	Stock(IPrenda * prenda, int cantidad);
	int obtenerCantidad();
	string toString();

private:
	int cantidad = 0;
};

