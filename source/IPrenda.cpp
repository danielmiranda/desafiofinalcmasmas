#include "IPrenda.h"

using namespace std;

string IPrenda::toString() {
	return "";
}

bool IPrenda::operator==(IPrenda& ref)  {
	//return this->igual(ref);
	bool result = this->_equals(ref);
 	return result;
}

bool IPrenda::_equals(IPrenda & other) 
{
    if (typeid(*this) != typeid(other)) return false;
    return this->prendaCalidad == other.prendaCalidad;
}

float IPrenda::calcularCotizacion(int cantidad, float precio) {
    return precio;
}

/*

*/
Cotizacion IPrenda::obtenerCotizacion(int cantidad, float precio, int codigoVendedor) {
    float total = this->calcularCotizacion(cantidad, precio);
    string prendaDetalle = this->toString();
    Cotizacion cotiza = Cotizacion(prendaDetalle, cantidad, total, precio, to_string(codigoVendedor));
    //Cotizacion * cotizar = new Cotizacion("Prenda Detalle", cantidad, total, precio);

    return cotiza;
}





