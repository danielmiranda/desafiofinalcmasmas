#include "Pantalon.h"

Pantalon::Pantalon(IPrenda::ECalidad calidad, Pantalon::ETipoPantalon tipoPantalon) {
	this->prendaCalidad = calidad;
	this->pantalonTipo = tipoPantalon;
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