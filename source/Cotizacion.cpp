#include "Cotizacion.h"
#include "Vendedor.h"
#include <ctime>

using namespace std;

Cotizacion::Cotizacion(Vendedor *vendedor) {
	this->cotizacionVendedor = vendedor;
	this->cotizacionFechaHora = time(0);
	this->cotizacionResultado = 0;
	this->cotizacionNumero = 0;
}
