#pragma once
#include <string>
#include <ctime>
//#include "Vendedor.h"

using namespace std;

class Cotizacion
{
public:
	//Cotizacion();
	Cotizacion(string prendaDetalle, int cantidad, float subTotal, float precio);
	string toString(string vendedor);

private:
	int cotizacionNumero;
	time_t cotizacionFechaHora;
	string cotizacionPrendaDetalle;
	int cotizacionCantidad;
	float cotizacionTotal;
	float cotizacionPrecio;

};

