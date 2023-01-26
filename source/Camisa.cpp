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
	return this->prendaCodigo + ": " + this->CaracteristicaToString(this->prendaCalidad) + ", " + this->CaracteristicaToString(this->camisaCuello) + ", " + this->CaracteristicaToString(this->camisaManga);
}

string Camisa::CaracteristicaToString(Camisa::ETipoCuello e)
{
    switch (e)
    {
    case Camisa::ETipoCuello::NORMAL: return "Cuello Normal";
    case Camisa::ETipoCuello::MAO: return "Cuello Mao";
    }
}

string Camisa::CaracteristicaToString(Camisa::ETipoManga e)
{
    switch (e)
    {
    case Camisa::ETipoManga::CORTA: return "Manga Corta";
    case Camisa::ETipoManga::LARGA: return "Manga Larga";
    }
}

string Camisa::CaracteristicaToString(IPrenda::ECalidad e)
{
    switch (e)
    {
    case IPrenda::ECalidad::STANDARD: return "Normal";
    case IPrenda::ECalidad::PREMIUM: return "Premium";
    }
}