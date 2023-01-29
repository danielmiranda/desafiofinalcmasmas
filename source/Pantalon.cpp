#include "Pantalon.h"

Pantalon::Pantalon(IPrenda::ECalidad calidad, Pantalon::ETipoPantalon tipoPantalon) {
	this->prendaCalidad = calidad;
	this->pantalonTipo = tipoPantalon;
}

Pantalon::Pantalon() {
    
}

string Pantalon::toString() {
    return this->prendaCodigo + ": " + this->caracteristicaToString(this->prendaCalidad) + ", " + this->caracteristicaToString(this->pantalonTipo);
}

string Pantalon::caracteristicaToString(Pantalon::ETipoPantalon e)
{
    switch (e)
    {
    case Pantalon::ETipoPantalon::NORMAL: return "Normal";
    case Pantalon::ETipoPantalon::CHUPIN: return "Chupin";
    }
}

string Pantalon::caracteristicaToString(IPrenda::ECalidad e)
{
    switch (e)
    {
    case IPrenda::ECalidad::STANDARD: return "Normal";
    case IPrenda::ECalidad::PREMIUM: return "Premium";
    }
}

float Pantalon::calcularCotizacion(int cantidad, float precio) {
    if (this->pantalonTipo == this->CHUPIN) {
        float precioCon12PorcientodeDescuento = precio * (1 - 0.12); //hacemos el descuento del 12%
        precio = precioCon12PorcientodeDescuento;
    }

    if (this->prendaCalidad == PREMIUM) {
        float precioCon30PorcientodeAumento = precio * (1 + 0.3); //hacemos el aumento del 30%
        precio = precioCon30PorcientodeAumento;
    }

    //precio = IPrenda::calcularCotizacion(cantidad, precio);
    //precio = __super::calcularCotizacion(cantidad, precio);

    return cantidad * precio;
}

//bool Pantalon::operator == (const Pantalon& rhs) const {
//    return this->prendaCalidad == rhs.prendaCalidad and this->pantalonTipo == rhs.pantalonTipo;
//}

bool Pantalon::operator == (const Pantalon& ref1) const{
    return (ref1.prendaCalidad == this->prendaCalidad && ref1.pantalonTipo == this->pantalonTipo);
}

bool Pantalon::_equals(IPrenda & ref) 
{
    if (typeid(*this) != typeid(ref)) return false;

    Pantalon* pantalon = static_cast<Pantalon*>(&ref);

    return (pantalon->prendaCalidad == this->prendaCalidad 
        && pantalon->pantalonTipo == this->pantalonTipo);
}

/*
Cotizacion Pantalon::obtenerCotizacion(int cantidad, float precio) {
    float total = this->calcularCotizacion(cantidad, precio);
    Cotizacion cotiza = Cotizacion("Prenda Detalle", 1, 11, 1);
    //Cotizacion * cotizar = new Cotizacion("Prenda Detalle", cantidad, total, precio);

    return cotiza;
}
*/


