#pragma once
#include <string>

#include <typeinfo>
#include <typeindex>

//#include "Cotizacion.h"

using namespace std;

class IPrenda
{
public:
	enum ECalidad
	{
		STANDARD,
		PREMIUM
	};

	static ECalidad ecalidad;

	string prendaCodigo;
	
	IPrenda::ECalidad prendaCalidad;
	
	virtual float calcularCotizacion(int cantidad, float precio);
	string caracteristicaToString(IPrenda::ECalidad e);

	virtual string toString();

	bool operator==( IPrenda &ref);

	virtual bool _equals(IPrenda & other);

	//Cotizacion obtenerCotizacion(int cantidad, float precio);


private:
	float prendaPrecio = 0;

	
};

