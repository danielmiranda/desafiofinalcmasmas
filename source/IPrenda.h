#pragma once
#include <string>

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
	
	float calcularCotizacion(int cantidad, float precio);
	string caracteristicaToString(IPrenda::ECalidad e);

	virtual string toString();

private:
	float prendaPrecio = 0;
};

