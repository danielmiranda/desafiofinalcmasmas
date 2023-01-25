#pragma once
#include <string>

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
	//Prenda(int codigo, Prenda::Calidad calidad);
	
	float calcularCotizacion(int cantidad, float precio);
private:
	float prendaPrecio = 0;
};

