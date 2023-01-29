#include "Camisa.h"


Camisa::Camisa() {
}

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

float Camisa::calcularCotizacion(int cantidad, float precio) {
    if (this->camisaManga == this->CORTA) {
        float precioCon10PorcientodeDescuento = precio * (1 - 0.1); //hacemos el descuento del 10%
        precio = precioCon10PorcientodeDescuento;
    }

    if (this->camisaCuello == this->MAO) {
        float precioCon3PorcientodeAumento = precio * (1 + 0.03); //hacemos el aumento del 3%
        precio = precioCon3PorcientodeAumento;
    }

    if (this->prendaCalidad == PREMIUM) {
        float precioCon30PorcientodeAumento = precio * (1 + 0.3); //hacemos el aumento del 30%
        precio = precioCon30PorcientodeAumento;
    }

    precio = IPrenda::calcularCotizacion(cantidad, precio);

    return cantidad * precio;
}

bool Camisa::operator==(const Camisa& ref1) const {
    return ref1.prendaCalidad == this->prendaCalidad and ref1.camisaCuello == this->camisaCuello;
}

bool Camisa::_equals(IPrenda& ref)
{
    if (typeid(*this) != typeid(ref)) return false;

    Camisa* camisa = static_cast<Camisa*>(&ref);

    return (camisa->prendaCalidad == this->prendaCalidad 
        && camisa->camisaCuello == this->camisaCuello
        && camisa->camisaManga == this->camisaManga
        );
}

