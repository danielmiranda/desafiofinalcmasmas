#include "CotizacionPrenda.h"

CotizacionPrenda::CotizacionPrenda(Prenda *prenda, int cantidad) {
	this->prendaCodigo = prenda;
	this->cantidad = cantidad;
	this->subtotal = this->prendaCodigo->prendaPrecio * cantidad;

}
