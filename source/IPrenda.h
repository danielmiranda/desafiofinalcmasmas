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
	//Prenda(int codigo, Prenda::Calidad calidad);
	
	float calcularCotizacion(int cantidad, float precio);
	string CaracteristicaToString(IPrenda::ECalidad e);

	string toString();

private:
	float prendaPrecio = 0;
};

