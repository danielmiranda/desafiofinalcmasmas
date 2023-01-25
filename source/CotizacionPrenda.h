#pragma once
#include "IPrenda.h"

class CotizacionPrenda
{
public: 
	IPrenda *prendaCodigo;
	int cantidad;
	float subtotal;
	CotizacionPrenda(IPrenda *prenda, int cantidad);

};

