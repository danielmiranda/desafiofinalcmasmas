#pragma once
#include <iostream>
#include <string>
#include "Tienda.h"
#include "Vendedor.h"

#define WIDTHSCREEN 56

const std::string MSG_TITULO = "COTIZADOR EXPRESS - MENU PRINCIPAL";
const std::string MSG_SEPARADOR(WIDTHSCREEN, '-');


using namespace std;

class PantallaPrincipal
{
public:
	virtual void show();
	void clear();
	string center(string txt);
	void setTienda(Tienda* tienda);
	void setVendedor(Vendedor * vendedor);
	virtual void showMenu();

private:
	Tienda* tienda;
	Vendedor* vendedor;

};

