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

	string toString();
	string CaracteristicaToString(Camisa::ETipoCuello e);
	string CaracteristicaToString(Camisa::ETipoManga e);
	string CaracteristicaToString(Camisa::ECalidad e);

	//string toString();
};
