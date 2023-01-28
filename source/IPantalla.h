#pragma once
#include <iostream>
#include <string>
#include "Tienda.h"


const std::string MSG_TITULO = "                       COTIZADOR EXPRESS - MENÚ PRINCIPAL                      ";
const std::string MSG_SEPARADOR = "-------------------------------------------------------------------------------";

using namespace std;

class IPantalla
{
public:
	virtual void show() = 0;
	virtual void clear() = 0;
	virtual void setTienda() = 0;

private:
	Tienda tienda;

};