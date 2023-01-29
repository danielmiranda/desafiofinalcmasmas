#pragma once
#include <iostream>
#include <string>
#include "Tienda.h"
#include "Vendedor.h"
#include "Camisa.h"
#include "Pantalon.h"


#define WIDTHSCREEN 56

const std::string MSG_TITULO = "COTIZADOR EXPRESS";
const std::string MSG_SEPARADOR(WIDTHSCREEN, '-');

using namespace std;

class PantallaPrincipal
{
public:
	virtual void show();
	virtual void showCotizacion();
	virtual void showHistorial(string contenido);
	void clear();
	string center(string txt);
	void setTienda(Tienda* tienda);
	void setVendedor(Vendedor * vendedor);
	virtual void showMenu();
	virtual void showMenuCotizacion();
	virtual void showMenuHistorial();

private:
	Tienda* tienda;
	Vendedor* vendedor;
	void verOpciones(const char* option, bool& exitCondition);
	void verOpcionesCotizacion(string option, bool& exitCondition, int& paso);
	void verOpcionesHistorial(const char* option, bool& exitCondition);

};

