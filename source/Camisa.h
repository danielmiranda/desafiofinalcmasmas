#pragma once
#include "IPrenda.h"

class Camisa : public IPrenda
{
public:
	enum ETipoCuello {
		NORMAL, MAO
	};

	enum ETipoManga {
		CORTA, LARGA
	};

	static ETipoCuello etipocuello;
	static ETipoManga etipomanga;

	ETipoCuello camisaCuello;
	ETipoManga camisaManga;
	ECalidad prendaCalidad;
	string prendaCodigo = "CAMISA";

	Camisa(IPrenda::ECalidad calidad, Camisa::ETipoCuello tipoCuello, Camisa::ETipoManga tipoManga);
	Camisa();
	string toString();
	string caracteristicaToString(Camisa::ETipoCuello e);
	string caracteristicaToString(Camisa::ETipoManga e);
	string caracteristicaToString(Camisa::ECalidad e);
	float calcularCotizacion(int cantidad, float precio) override;

	bool operator==(const Camisa& ref1) const;

	virtual bool _equals(IPrenda& other);

};

