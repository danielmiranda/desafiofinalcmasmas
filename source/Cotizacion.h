#pragma once
#include <string>
#include <ctime>
#include "Vendedor.h"
#include "IPrenda.h"

using namespace std;

class Cotizacion
{
public:
	int cotizacionNumero;
	time_t cotizacionFechaHora;
	Vendedor* cotizacionVendedor = NULL;
	float cotizacionResultado;
	IPrenda cotizacionPrenda;
	int cotizacionCantidad;
	float cotizacionTotal;

	Cotizacion(Vendedor *vendedor);

	string toString();

};

