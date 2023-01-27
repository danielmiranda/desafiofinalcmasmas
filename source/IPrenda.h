#pragma once
#include <string>

#include <typeinfo>
#include <typeindex>

using namespace std;

class IPrenda
{
public:
	enum ECalidad
	{
		STANDARD = 10,
		PREMIUM = 100
	};

	static ECalidad ecalidad;

	string prendaCodigo;
	
	IPrenda::ECalidad prendaCalidad;
	
	virtual float calcularCotizacion(int cantidad, float precio);
	string caracteristicaToString(IPrenda::ECalidad e);

	virtual string toString();

	bool operator==( IPrenda &ref) ;

	virtual bool _equals(IPrenda & other) ;


private:
	float prendaPrecio = 0;

	
};

