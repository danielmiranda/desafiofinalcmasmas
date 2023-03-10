#pragma once
#include <string>
#include<iostream>
#include "Stock.h"
#include "Cotizacion.h"
#include <vector>

using namespace std;

class Tienda
{
public:
	string obtenerNombre();
	string obtenerDireccion();
	string toString();

	void listarStock();
	bool agregarStock(Stock* itemStock);
	int obtenerStock(IPrenda* itemStock);

	bool agregarCotizacion(Cotizacion* itemCotizacion);
	string listarCotizaciones();

	Tienda();
	Tienda(string nombre, string direccion);

	static int cotizacionNumero;

	string obtenerStockParaImprimir();

private:
	string tiendaNombre;
	string tiendaDireccion;
	Stock* stock[12];
	vector<Stock*> stockList;
	vector<Cotizacion*> cotizacionList;


};

