#include "Camisa.h"
//#include "include\magic_enum.hpp"

#define stringify( name ) #name



Camisa::Camisa(IPrenda::ECalidad calidad, Camisa::ETipoCuello tipoCuello, Camisa::ETipoManga tipoManga) {
	//this->prendaPrecio = precio;
	this->prendaCalidad = calidad;
	this->camisaCuello = tipoCuello;
	this->camisaManga = tipoManga;
}

string Camisa::toString() {
	return this->prendaCodigo + ": " + this->caracteristicaToString(this->prendaCalidad) + ", " + this->caracteristicaToString(this->camisaCuello) + ", " + this->caracteristicaToString(this->camisaManga);
}

string Camisa::caracteristicaToString(Camisa::ETipoCuello e)
{
    switch (e)
    {
    case Camisa::ETipoCuello::NORMAL: return "Cuello Normal";
    case Camisa::ETipoCuello::MAO: return "Cuello Mao";
    }
}

string Camisa::caracteristicaToString(Camisa::ETipoManga e)
{
    switch (e)
    {
    case Camisa::ETipoManga::CORTA: return "Manga Corta";
    case Camisa::ETipoManga::LARGA: return "Manga Larga";
    }
}

string Camisa::caracteristicaToString(IPrenda::ECalidad e)
{
    switch (e)
    {
    case IPrenda::ECalidad::STANDARD: return "Normal";
    case IPrenda::ECalidad::PREMIUM: return "Premium";
    }
}

float calcularCotizacion(int cantidad, float precio) {
    return 0;
}