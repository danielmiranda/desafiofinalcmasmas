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
    return 0;
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