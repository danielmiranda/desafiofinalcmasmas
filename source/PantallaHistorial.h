#pragma once
#include <iostream>
#include <string>
#include "PantallaPrincipal.h"

using namespace std;

class PantallaHistorial : public PantallaPrincipal
{
public:
	void show(string contenido);
	void showMenu();

private:
	void verOpciones(const char* option, bool& exitCondition);

};

