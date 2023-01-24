#include "Cotizacion.h"
#include "Vendedor.h"
#include <ctime>

using namespace std;

Cotizacion::Cotizacion(Vendedor *vendedor) {
	this->cotizacion_vendedor = vendedor;
	this->cotizacionFechaHora = time(0);
	this->cotizacionResultado = 0;
	this->cotizacionNumero = 0;
}