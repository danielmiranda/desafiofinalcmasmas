#pragma once
#include "Prenda.h"

class CotizacionPrenda
{
public: 
	Prenda *prendaCodigo;
	int cantidad;
	float subtotal;
	CotizacionPrenda(Prenda *prenda, int cantidad);

};

