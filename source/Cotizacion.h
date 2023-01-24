#pragma once
#include <string>
#include <ctime>
#include "Vendedor.h"

using namespace std;

class Cotizacion
{
public:
	int cotizacionNumero;
	time_t cotizacionFechaHora;
	Vendedor* cotizacion_vendedor = NULL;
	float cotizacionResultado;
	Cotizacion(Vendedor *vendedor);

};

