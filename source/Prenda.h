#pragma once
#include <string>

using namespace std;

class Prenda
{
public:
	enum Calidad
	{
		STANDARD,
		PREMIUM
	};

	int prendaCodigo;
	float prendaPrecio;
	Prenda::Calidad prendaCalidad;
	Prenda(int codigo, float precio, Prenda::Calidad calidad);
};

