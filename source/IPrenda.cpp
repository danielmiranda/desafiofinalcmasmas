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
    return cantidad * precio;
}



