#include "Cotizacion.h"
//#include "Vendedor.h"
#include "Tienda.h"
#include <ctime>

#include <iomanip>

#pragma warning(disable : 4996)

using namespace std;

//Cotizacion::Cotizacion(){}
Cotizacion::Cotizacion(string prendaDetalle, int cantidad, float subTotal, float precio, string vendedor) {

	int numero =  ++Tienda::cotizacionNumero;

	this->cotizacionFechaHora = time(0);
	this->cotizacionNumero = numero;

	this->cotizacionPrendaDetalle = prendaDetalle;
	this->cotizacionCantidad = cantidad;
	this->cotizacionTotal = subTotal;
	this->cotizacionPrecio = precio;

	this->cotizacionVendedor = vendedor;
}


string Cotizacion::toString() {

	char fechaYHora[100];
	strftime(fechaYHora, 50, "Fecha y Hora de la cotizacion: %d/%m/%Y %H:%M", localtime(&this->cotizacionFechaHora));

	string output = "";
	output += "Numero de identificacion: " + to_string(this->cotizacionNumero) + "\n";
	output += fechaYHora;
	output += "\n";
	output += "Codigo del Vendedor: " + this->cotizacionVendedor + "\n";
	output += "Prenda cotizada: " + this->cotizacionPrendaDetalle + "\n";
	output += "Precio unitario: $" + to_string(this->cotizacionPrecio) + "\n";
	output += "Cantidad de unidades cotizadas: " + to_string(this->cotizacionCantidad) + "\n";
	output += "Precio final: $" + to_string(this->cotizacionTotal) + "\n";

	return output;
}
