#pragma once
#include "IPrenda.h"

class Pantalon : public IPrenda
{
public:
	enum ETipoPantalon {
		NORMAL, CHUPIN
	};

	static ETipoPantalon etipopantalon;

	ECalidad prendaCalidad;
	ETipoPantalon pantalonTipo;
	string prendaCodigo = "PANTALON";

	Pantalon();
	Pantalon(IPrenda::ECalidad calidad, Pantalon::ETipoPantalon tipoPantalon);

	string toString();
	string caracteristicaToString(Pantalon::ETipoPantalon e);
	string caracteristicaToString(Pantalon::ECalidad e);
	float calcularCotizacion(int cantidad, float precio) override;

	bool operator==(const Pantalon& ref1) const;

	virtual bool _equals(IPrenda & other);

};