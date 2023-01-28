#pragma once
#include <iostream>
#include <string>
#include "Tienda.h"
#include "Vendedor.h"


const std::string MSG_TITULO = "COTIZADOR EXPRESS - MENU PRINCIPAL";
const std::string MSG_SEPARADOR(80, '-');


using namespace std;

class PantallaPrincipal
{
public:
	virtual void show();
	void clear();
	string center(string txt);
	void setTienda(Tienda* tienda);
	void setVendedor(Vendedor * vendedor);

private:
	Tienda* tienda;
	Vendedor* vendedor;

};

